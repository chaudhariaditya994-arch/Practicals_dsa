#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5000, 3000, 8000, 2000, 7000};
    int i, j, min, temp;

    for (i = 0; i < 4; i++)
    {
        min = i;

        for (j = i + 1; j < 5; j++)
        {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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