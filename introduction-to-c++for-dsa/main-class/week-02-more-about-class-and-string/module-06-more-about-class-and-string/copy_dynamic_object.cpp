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
    Person *s1 = new Person("Chandan Ojha", 25);
    Person *s2 = new Person("Rayhan Ahmed", 27);

    // s1 = s2;
    // s1->name = s2->name;
    // s1->age = s2->age;

    *s1 = *s2;

    delete s2;

    cout << s1->name << " " << s1->age << endl;

    return 0;
}