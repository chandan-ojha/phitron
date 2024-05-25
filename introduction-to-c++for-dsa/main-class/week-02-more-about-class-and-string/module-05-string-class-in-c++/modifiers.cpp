#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";
    // string b = "A";
    // a += b; // a=a+b;
    // a.append(b);
    // cout << a << endl;
    // cout << b << endl;

    // a = "HelloA"; ->works
    // a = a + 'A'; ->works [Not recommende]
    // a = a + b; ->works
    // a[5] = 'A'; ->not works
    // a.push_back('A');
    // a.pop_back();
    // a.pop_back();

    // a = "Gelo";
    // a.assign("Gelo");
    // cout << a << endl;

    string a = "HelloWorld";
    // a.erase(4, 3);
    // a.replace(4, 1, "so"); //a.replace(5, 0, "so");
    a.insert(5, "Chandan");
    cout << a << endl;

    return 0;
}