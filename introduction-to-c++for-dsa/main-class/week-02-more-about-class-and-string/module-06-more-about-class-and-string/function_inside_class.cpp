#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void print()
    {
        cout << name << " " << age << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person s1("Chandan Ojha", 25, 95, 85);
    // cout << s1.name << endl;
    s1.print();
    cout << s1.total_marks() << endl;

    return 0;
}