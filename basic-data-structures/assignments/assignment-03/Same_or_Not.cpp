#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> a;

    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push(v);
    }

    queue<int> b;

    for (int i = 1; i <= m; i++)
    {
        int v;
        cin >> v;
        b.push(v);
    }

    bool isSame = true;

    if (a.size() != b.size())
    {
        isSame = false;
    }
    else
    {
        while (!a.empty())
        {
            if (a.top() != b.front())
            {
                isSame = false;
                break;
            }
            a.pop();
            b.pop();
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