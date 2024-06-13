#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> &a, int n)
{
    vector<int> preSum(n);

    preSum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = a[i] + preSum[i - 1];
    }

    return preSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> result = runningSum(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}