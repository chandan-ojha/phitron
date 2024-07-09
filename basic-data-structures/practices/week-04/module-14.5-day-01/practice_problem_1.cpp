#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1, s2;
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        s1.push(v);
    }

    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int v;
        cin >> v;
        s2.push(v);
    }

    bool isSame = true;

    if (s1.size() != s2.size())
    {
        isSame = false;
    }
    else
    {
        while (!s1.empty())
        {
            if (s1.top() != s2.top())
            {
                isSame = false;
                break;
            }
            s1.pop();
            s2.pop();
        }
    }

    if (isSame)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
