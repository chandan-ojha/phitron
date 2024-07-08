#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Q1.push(x);
    }

    queue<int> Q2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        Q2.push(x);
    }

    queue<int> MergedQueue;

    while (!Q1.empty())
    {
        MergedQueue.push(Q1.front());
        Q1.pop();
    }

    while (!Q2.empty())
    {
        MergedQueue.push(Q2.front());
        Q2.pop();
    }

    while (!MergedQueue.empty())
    {
        cout << MergedQueue.front() << " ";
        MergedQueue.pop();
    }

    return 0;
}