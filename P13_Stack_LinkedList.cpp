#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *top = NULL, *temp;
    int choice, value;

    do
    {
        cout << "1.Push 2.Pop 3.Peek 4.Display 5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            temp = new Node;
            cin >> value;

            temp->data = value;
            temp->next = top;
            top = temp;
            break;

        case 2:
            if (top == NULL)
                cout << "Stack Underflow" << endl;
            else
            {
                temp = top;
                cout << "Deleted: " << top->data << endl;
                top = top->next;
                delete temp;
            }
            break;

        case 3:
            if (top == NULL)
                cout << "Stack Empty" << endl;
            else
                cout << "Top: " << top->data << endl;
            break;

        case 4:
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
            break;
        }
    }
    while (choice != 5);

    return 0;
}