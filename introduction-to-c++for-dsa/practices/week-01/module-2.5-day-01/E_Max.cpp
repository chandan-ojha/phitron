#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int number;
    int max_number = INT_MIN;

    while (n--)
    {
        cin >> number;
        max_number = max(max_number, number);
    }

    cout << max_number;
}