#include <iostream>
using namespace std;

int a[10][10], visited[10], n;

void dfs(int v)
{
    visited[v] = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[v][i] == 1 && visited[i] == 0)
            dfs(i);
    }
}

int main()
{
    int i, j;

    cout << "Enter number of cities: " << endl;
    cin >> n;

    cout << "Enter adjacency matrix: " << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    dfs(0);

    for (i = 0; i < n; i++)
    {
        if (visited[i] == 0)
            break;
    }

    if (i == n)
        cout << "Graph is Connected" << endl;
    else
        cout << "Graph is Not Connected" << endl;

    return 0;
}