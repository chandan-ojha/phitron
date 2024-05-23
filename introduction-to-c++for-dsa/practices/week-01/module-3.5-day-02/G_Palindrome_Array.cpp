#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = n - 1;

    int isPalindrome = 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrome = 0;
        }

        i++;
        j--;
    }

    if (isPalindrome)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}