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

    sort(a, a + n);

    bool is_duplicate = false;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            is_duplicate = true;
            break;
        }
    }

    if (is_duplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
