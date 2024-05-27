#include <bits/stdc++.h>
using namespace std;
namespace p1
{
    int age1 = 24;
    void print()
    {
        cout << "Hello from p1" << endl;
    }
}

namespace p2
{
    int age2 = 30;
    void print()
    {
        cout << "Hello from p2" << endl;
    }
}

using namespace p1;
int main()
{
    cout << age1 << endl;
    print();
    cout << p2::age2 << endl;
    p2::print();
    return 0;
}