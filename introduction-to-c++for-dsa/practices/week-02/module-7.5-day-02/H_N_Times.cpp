#include <bits/stdc++.h>
using namespace std;
void print_character()
{
    int n;
    char c;
    cin >> n >> c;

    for (int i = 1; i <= n; i++)
    {
        cout << c << " ";
    }

    return;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        print_character();
        cout << endl;
    }

    return 0;
}