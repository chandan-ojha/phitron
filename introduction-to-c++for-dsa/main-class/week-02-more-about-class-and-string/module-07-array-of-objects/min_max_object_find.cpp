#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    Student min, max;
    min.marks = INT_MAX;
    max.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min.marks)
        {
            min = a[i];
        }
        if (a[i].marks > max.marks)
        {
            max = a[i];
        }
    }

    cout << min.name << " " << min.roll << " " << min.marks << endl;
    cout << max.name << " " << max.roll << " " << max.marks << endl;

    return 0;
}