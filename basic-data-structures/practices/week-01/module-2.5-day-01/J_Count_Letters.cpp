#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    vector<int> count(26, 0);

    while (cin >> ch)
    {
        count[ch - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (count[i - 'a'] > 0)
        {
            cout << i << " : " << count[i - 'a'] << endl;
        }
    }
    return 0;
}