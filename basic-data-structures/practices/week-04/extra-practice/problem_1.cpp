#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> result;

    for (int i = 1; i < n - 1; i++)
    {
        if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1])
        {
            result.push_back(nums[i]);
        }
    }

    for (int num : result)
    {
        cout << num << endl;
    }

    return 0;
}