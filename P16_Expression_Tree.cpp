#include<iostream>
using namespace std;

struct node{
    char data;
    node *left;
    node *right;
};

char prefix[50];
int i=0;

node* create(){
    node *t=new node;
    t->data=prefix[i];
    i++;
    t->left=NULL;
    t->right=NULL;

    // if operator then it has two children
    if(t->data=='+' || t->data=='-' || t->data=='*' || t->data=='/'){
        t->left=create();
        t->right=create();
    }
    return t;
}

void postorder(node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}

void deletetree(node *root){
    if(root==NULL)
        return;
    deletetree(root->left);
    deletetree(root->right);
    delete root;
}

int main(){
    cout<<"Enter prefix expression (no spaces): ";
    cin>>prefix;

    node *root=create();

    cout<<"Postfix expression: ";
    postorder(root);
    cout<<endl;

    deletetree(root);
    cout<<"Tree deleted"<<endl;
    return 0;
}