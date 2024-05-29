#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ProgrammingPhitronHero";
    int cnt = 0;

    while (str.find("Phitron") != -1)
    {
        str.replace(str.find("Phitron"), 7, " ");
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}