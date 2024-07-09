#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        s.push(v);
    }

    queue<int> q;
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int v;
        cin >> v;
        q.push(v);
    }

    bool isSame = true;

    if (s.size() != q.size())
    {
        isSame = false;
    }
    else
    {
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                isSame = false;
                break;
            }
            s.pop();
            q.pop();
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