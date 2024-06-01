#include <bits/stdc++.h>
using namespace std;

long long int equation_result(long long int x, long long int n)
{
    long long int sum = 0;

    for (int i = 2; i <= n; i += 2)
    {
        long long int power = 1;

        for (int j = 1; j <= i; j++)
        {
            power = power * x;
        }

        sum = sum + power;
    }

    return sum;
}

int main()
{
    long long int x, n;
    cin >> x >> n;

    long long int result = equation_result(x, n);

    cout << result;

    return 0;
}
