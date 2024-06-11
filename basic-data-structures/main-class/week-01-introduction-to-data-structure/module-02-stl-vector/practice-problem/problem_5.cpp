#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int old_val, new_val;
    cin >> old_val >> new_val;

    int find_val;
    cin >> find_val;

    replace(v.begin(), v.end(), old_val, new_val);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int find_index = -1;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == find_val)
        {
            find_index = i;
            break;
        }
    }

    cout << find_index << endl;

    return 0;
}