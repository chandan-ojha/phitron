#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        // (*this).name=name;
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person s1("Chandan Ojha", 25);
    cout << s1.name << endl;

    return 0;
}