// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char s[n];
//     cin >> s;

//     sort(s, s + n);

//     cout << s;

//     return 0;
// }

/* in c */

// #include <stdio.h>
// int main()
// {
//     char ch;
//     int count[26] = {0};

//     while (scanf("%c", &ch) != EOF)
//     {
//         count[ch - 'a']++;
//     }

//     for (char i = 'a'; i <= 'z'; i++)
//     {
//         if (count[i - 'a'] > 0)
//         {
//             printf("%c", i, count[i - 'a']);
//         }
//     }

//     return 0;
// }

// TODO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n + 1];
    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        count[s[i] - 'a']++;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (count[c - 'a'] > 0)
        {
            for (int j = 0; j < count[c - 'a']; j++)
            {
                cout << c;
            }
        }
    }

    return 0;
}
