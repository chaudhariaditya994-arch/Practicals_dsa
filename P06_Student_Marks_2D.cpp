#include <iostream>
using namespace std;

int main()
{
    int a[10][10], total[10] = {0};
    int n, m, i, j;
    float avg[10];

    cout << "Enter number of students: " << endl;
    cin >> n;

    cout << "Enter number of subjects: " << endl;
    cin >> m;

    for (i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << endl;

        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
            total[i] = total[i] + a[i][j];
        }

        avg[i] = (float)total[i] / m;
    }

    cout << "Marks Table: " << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << "Total = " << total[i];
        cout << " Average = " << avg[i] << endl;
    }

    return 0;
}