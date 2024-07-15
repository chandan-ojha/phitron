#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;

    for (int i = 0; i < k && !q.empty(); i++)
    {
        st.push(q.front());
        q.pop();
    }

    queue<int> nq;

    while (!st.empty())
    {
        nq.push(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        nq.push(q.front());
        q.pop();
    }

    return nq;
}