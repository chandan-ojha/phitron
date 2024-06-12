#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    int duplicate = 0;

    while (l <= r)
    {
        int mid_index = (l + r) / 2;

        if (a[mid_index] == x)
        {
            duplicate++;
        }

        if (x > a[mid_index])
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }
    }

    if (duplicate >= 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
