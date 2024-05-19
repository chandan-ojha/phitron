#include <iostream>
using namespace std;
int main()
{
    int a;
    long long int b;
    cin >> a >> b;
    cout << a << " "
         << b << endl;

    char c;
    cin >> c;
    cout << int(c) << endl;

    int i = 10;
    long long int l = (long long int)(i);
    cout << l;

    return 0;
}