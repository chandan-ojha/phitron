#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int alp_count[26] = {0};
        int s_len = strlen(s);

        for (int i = 0; i < s_len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                alp_count[s[i] - 'a']++;
            }
        }

        for (char i = 'a'; i <= 'z'; i++)
        {
            if (alp_count[i - 'a'] > 0)
            {
                for (int j = 0; j < alp_count[i - 'a']; j++)
                {
                    cout << i;
                }
            }
        }

        cout << endl;
    }

    return 0;
}
