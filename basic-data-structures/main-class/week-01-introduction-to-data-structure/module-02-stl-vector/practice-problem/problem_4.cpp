#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    v.resize(20, 0);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.clear();

    if (v.empty())
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.resize(10, 100);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}