#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(const char *name, int roll, char section, double math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student s1("Chandan Ojha", 5, 'A', 75.5, 8);
    Student s2("Rayhan", 6, 'A', 65.5, 8);
    Student s3("Akash", 7, 'A', 87.79, 8);

    // if (s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks)
    // {
    //     cout << "Name: " << s1.name << " " << "Marks: " << s1.math_marks << endl;
    // }
    // else if (s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks)
    // {
    //     cout << "Name: " << s2.name << " " << "Marks: " << s2.math_marks << endl;
    // }
    // else
    // {
    //     cout << "Name: " << s3.name << " " << "Marks: " << s3.math_marks << endl;
    // }

    double highest_math_marks = max({s1.math_marks, s2.math_marks, s3.math_marks});

    cout << "Highest Math Marks: " << highest_math_marks << endl;

    if (s1.math_marks == highest_math_marks)
    {
        cout << "Student Name: " << s1.name << endl;
    }
    else if (s2.math_marks == highest_math_marks)
    {
        cout << "Student Name: " << s2.name << endl;
    }
    else
    {
        cout << "Student Name: " << s3.name << endl;
    }

    return 0;
}