#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;

    // capacity
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;

    // Clear
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // v.clear();
    v.resize(2);
    v.resize(7, 100);
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // cout << v[1] << endl;

    return 0;
}