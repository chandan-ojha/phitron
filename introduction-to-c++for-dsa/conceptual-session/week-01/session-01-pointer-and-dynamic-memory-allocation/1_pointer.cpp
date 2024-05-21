#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a = 5;
    // int *a_ptr = &a;

    // cout << a << endl;
    // cout << &a << endl;

    // cout << *a_ptr << endl;
    // cout << &a_ptr << endl;

    int x = 5;
    int *y = &x;
    int **z = &y;

    cout << x << endl;
    cout << "Adress of x: " << &x << endl;

    cout << "Value of y: " << y << endl;
    cout << "Adress of y: " << &y << endl;

    cout << "Value of z: " << z << endl;
    cout << *z << endl;
    cout << **z << endl;

    return 0;
}