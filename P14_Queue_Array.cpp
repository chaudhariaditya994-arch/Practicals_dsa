#include <iostream>
using namespace std;

int main()
{
    int a[5], front = 0, rear = -1;
    int choice, value, i;

    do
    {
        cout << "1.Enqueue 2.Dequeue 3.Display 4.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (rear == 4)
                cout << "Queue Full" << endl;
            else
            {
                cin >> value;
                rear++;
                a[rear] = value;
            }
            break;

        case 2:
            if (front > rear)
                cout << "Queue Empty" << endl;
            else
            {
                cout << "Deleted: " << a[front] << endl;
                front++;
            }
            break;

        case 3:
            for (i = front; i <= rear; i++)
                cout << a[i] << " ";
            cout << endl;
            break;
        }
    }
    while (choice != 4);

    return 0;
}