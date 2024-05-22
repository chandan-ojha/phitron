#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student *chandan = new Student(1, 10, 4.86);
    cout << chandan->roll << " " << chandan->cls << " " << chandan->gpa << endl;

    return 0;
}