#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    /* min-max */

    // int a, b, c, d;
    // cin >> a >> b >> c >> d;

    // int x = min(a, b);
    // int y = max(a, b);

    // cout << x << " " << y << endl;

    // int mn = min({a, b, c, d});
    // int mx = max({a, b, c, d});

    // cout << mn << " " << mx << endl;

    /* swap */
    int a, b;
    cin >> a >> b;

    // my_swap(&a, &b);
    swap(a, b);

    cout << a << " " << b << endl;
}