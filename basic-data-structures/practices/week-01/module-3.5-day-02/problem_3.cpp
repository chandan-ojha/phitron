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

    sort(a, a + n); // time complexity o(nlogn)

    int q;
    cin >> q;

    while (q--) // time complexity O((n+q)*logn)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;

            if (a[mid_index] == x)
            {
                flag = true;
                break;
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

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}