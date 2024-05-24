#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alp_count[26] = {0};
    char ch;

    while (cin >> ch)
    {
        alp_count[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < alp_count[i - 'a']; j++)
        {
            cout << i;
        }
    }

    cout << endl;

    return 0;
}
