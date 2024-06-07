#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int max = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            int s;
            cin >> s;

            if (s > max)
            {
                max = s;
            }
        }

        cout << max << endl;
    }

    return 0;
}