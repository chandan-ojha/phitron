#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> st;

    for (char c : s)
    {
        st.push(c);
    }

    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}
