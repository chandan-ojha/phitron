#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;

    // cin >> dhoni->jersey_no;
    // getchar();
    // cin.getline(dhoni->country, 100);

    dhoni->jersey_no = 23;
    char tmp[100] = "India";
    strcpy(dhoni->country, tmp);

    // kohli = dhoni;

    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country;
    // delete dhoni;
    return 0;
}