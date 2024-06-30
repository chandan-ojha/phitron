#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Complexity Analysis

    int k = 1, n = 5;
    while (k <= n) // Time Complexity O(N)
    {
        cout << k << endl;
        k = k * 2;
    }

    for (int i = 0; i < n; i++) // Time Complexity O(N^2)
    {
        for (int j = i; j > 0; j--)
        {
            cout << i << j;
        }
    }

    for (int i = 0; i < n; i++) // Time Complexity O(N^3)
    {
        for (int j = i; j > 0; j--)
        {
            for (int k = j; k > 0; k--)
            {
                cout << i << j << k;
            }
        }
    }

    for (int i = n / 2; i <= n; i++) // Time Complexity O(nLogn)
    {
        for (int j = 1; j <= n; j = j * 2)
        {
            cout << i << j << endl;
        }
    }

    for (int i = n / 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j = j + i)
        {
            cout << i << j << endl;
        }
    }

    return 0;
}