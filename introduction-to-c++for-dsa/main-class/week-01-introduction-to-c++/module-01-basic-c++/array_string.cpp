#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int a;
    char s[100];

    cin >> a;

    getchar();

    // cin >> s;
    // fgets(s, 100, stdin);
    cin.getline(s, 100);

    cout << a << endl;
    cout << s << endl;

    return 0;
}