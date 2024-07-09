#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1, q2;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        q1.push(val);
    }

    stack<int> s;

    while (!q1.empty())
    {
        s.push(q1.front());
        q1.pop();
    }

    while (!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}