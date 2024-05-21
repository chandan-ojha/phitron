#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int min_number = min({a, b, c});
    int max_number = max({a, b, c});

    cout << min_number << " " << max_number << endl;
}