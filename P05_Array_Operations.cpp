#include <iostream>
using namespace std;

int main()
{
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, i, pos, value, key;

    // Insert
    cout << "Enter position and value: " << endl;
    cin >> pos >> value;

    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    // Delete
    cout << "Enter position to delete: " << endl;
    cin >> pos;

    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    // Search
    cout << "Enter value to search: " << endl;
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            break;
        }
    }

    // Update
    cout << "Enter position and new value: " << endl;
    cin >> pos >> value;

    a[pos - 1] = value;

    // Display
    cout << "Array elements: " << endl;

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}