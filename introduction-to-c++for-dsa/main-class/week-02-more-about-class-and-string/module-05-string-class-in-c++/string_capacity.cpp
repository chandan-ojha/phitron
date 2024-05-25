#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s1 = "hello world";
    // cout << s1.size() << endl;
    // cout << s1.max_size() << endl;
    // cout << s1.capacity() << endl;

    // string s2 = "hello";
    // cout << s2 << endl;
    // s2.clear();
    // cout << s2.size() << endl;

    // string s3 = "hello";

    // s3.clear();

    // if (s3.empty() == true) // s.size()==0
    // {
    //     cout << "Empty" << endl;
    // }
    // else
    // {
    //     cout << "Not Empty" << endl;
    // }

    string s;
    cin >> s;
    // s.resize(5);
    // s.resize(20, 'X');
    // cout << s << endl;
    // cout << s.size() << endl;

    s.resize(5);
    cout << s << endl;
    s.resize(11, 'X');
    cout << s << endl;

    return 0;
}