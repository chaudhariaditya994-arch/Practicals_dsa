#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;

    cout << "Enter number: " << endl;
    cin >> n;

    cout << "Sum = " << sum(n) << endl;

    return 0;
}