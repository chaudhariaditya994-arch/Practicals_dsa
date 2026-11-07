#include <iostream>
using namespace std;

int main()
{
    int a[5], top = -1, choice, value;

    do
    {
        cout << "1.Push 2.Pop 3.Peek 4.Display 5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (top == 4)
                cout << "Stack Overflow" << endl;
            else
            {
                cin >> value;
                top++;
                a[top] = value;
            }
            break;

        case 2:
            if (top == -1)
                cout << "Stack Underflow" << endl;
            else
            {
                cout << "Deleted: " << a[top] << endl;
                top--;
            }
            break;

        case 3:
            if (top == -1)
                cout << "Stack Empty" << endl;
            else
                cout << "Top: " << a[top] << endl;
            break;

        case 4:
            for (int i = top; i >= 0; i--)
                cout << a[i] << " ";
            cout << endl;
            break;
        }
    }
    while (choice != 5);

    return 0;
}