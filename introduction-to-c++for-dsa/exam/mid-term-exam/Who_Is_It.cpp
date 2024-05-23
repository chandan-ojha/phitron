#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student s1, s2, s3;

        cin >> s1.id >> s1.name >> s1.section >> s1.total_marks;
        cin >> s2.id >> s2.name >> s2.section >> s2.total_marks;
        cin >> s3.id >> s3.name >> s3.section >> s3.total_marks;

        Student hm_student = s1;

        if (s2.total_marks > hm_student.total_marks ||
            (s2.total_marks == hm_student.total_marks && s2.id < hm_student.id))
        {
            hm_student = s2;
        }

        if (s3.total_marks > hm_student.total_marks ||
            (s3.total_marks == hm_student.total_marks && s3.id < hm_student.id))
        {
            hm_student = s3;
        }

        cout << hm_student.id << " " << hm_student.name << " " << hm_student.section << " " << hm_student.total_marks << endl;
    }

    return 0;
}
