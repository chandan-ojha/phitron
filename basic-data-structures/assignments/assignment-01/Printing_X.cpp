#include <bits/stdc++.h>
using namespace std;
void printX(int n)
{
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid && j == mid)
            {
                cout << "X";
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else if (j == n - 1 - i)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printX(n);
    return 0;

    return 0;
}