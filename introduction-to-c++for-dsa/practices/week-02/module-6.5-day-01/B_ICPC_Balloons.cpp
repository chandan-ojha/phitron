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

        char s[n];
        cin >> s;

        int count[26] = {0};
        int sum = 0;

        for (char c : s)
        {
            if (count[c - 'A'] == 0)
            {
                sum = sum + 2;
                count[c - 'A']++;
            }
            else
            {
                sum = sum + 1;
                count[c - 'A']++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}