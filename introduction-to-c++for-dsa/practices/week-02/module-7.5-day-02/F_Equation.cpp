#include <bits/stdc++.h>
using namespace std;
double series_sum(int x, int n)
{
    double sum = 0.0;

    for (int i = 2; i < n; i += 2)
    {
        sum = sum + pow(x * 1.0, i * 1.0);
    }

    return sum;
}
int main()
{
    int x, n;
    cin >> x >> n;
    int result = series_sum(x, n);
    cout << result << endl;
    return 0;
}