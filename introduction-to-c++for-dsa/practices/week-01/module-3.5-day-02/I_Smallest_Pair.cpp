#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min_num = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {

                int sum = arr[i] + arr[j] + ((j + 1) - (i + 1));
                min_num = min(min_num, sum);
            }
        }

        cout << min_num << endl;
    }

    return 0;
}