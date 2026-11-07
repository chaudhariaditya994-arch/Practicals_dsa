#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5000, 3000, 8000, 2000, 7000};
    int i, j, temp;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Salaries: " << endl;

    for (i = 0; i < 5; i++)
        cout << a[i] << " ";

    cout << endl;

    cout << "Top Five Highest Salaries: " << endl;

    for (i = 4; i >= 0; i--)
        cout << a[i] << " ";

    return 0;
}