#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insertion
void insert(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
        head = n;
    else
    {
        node *temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = n;
    }
}

// Traversal
void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Searching
void search(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            cout << "Found" << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Not Found" << endl;
}

// Deletion
void deleteFirst(node *&head)
{
    if (head != NULL)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main()
{
    node *head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    cout << "Linked List: ";
    display(head);

    search(head, 20);

    deleteFirst(head);

    cout << "After deletion: ";
    display(head);

    return 0;
}