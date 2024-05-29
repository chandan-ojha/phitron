#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int sum_first_3 = 0;

        for (int i = 0; i < 3; i++)
        {
            sum_first_3 = sum_first_3 + (s[i] - 48);
        }

        int sum_last_3 = 0;

        for (int i = 3; i < 6; i++)
        {
            sum_last_3 = sum_last_3 + (s[i] - 48);
        }

        if (sum_first_3 == sum_last_3)
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