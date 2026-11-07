#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *front = NULL, *rear = NULL, *temp;
    int choice, value;

    do
    {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            temp = new Node;
            cin >> value;

            temp->data = value;
            temp->next = NULL;

            if (front == NULL)
                front = rear = temp;
            else
            {
                rear->next = temp;
                rear = temp;
            }
            break;

        case 2:
            if (front == NULL)
                cout << "Queue Empty" << endl;
            else
            {
                temp = front;
                cout << "Deleted: " << front->data << endl;

                front = front->next;
                delete temp;

                if (front == NULL)
                    rear = NULL;
            }
            break;

        case 3:
            temp = front;

            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
            break;
        }
    }
    while (choice != 4);

    return 0;
}