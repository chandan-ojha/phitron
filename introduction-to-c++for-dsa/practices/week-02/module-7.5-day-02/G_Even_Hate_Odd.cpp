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
        int a[n];

        int min_num_ope = n / 2;
        int even_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even_count++;
                }
            }

            int result = abs(min_num_ope - even_count);

            cout << result << endl;
        }
    }

    return 0;
}