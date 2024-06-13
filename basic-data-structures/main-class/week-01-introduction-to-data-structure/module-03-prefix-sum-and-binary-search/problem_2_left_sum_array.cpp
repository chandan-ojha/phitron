#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << left_sum << " ";
        left_sum += a[i];
    }

    return 0;
}
