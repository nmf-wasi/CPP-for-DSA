#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int clss;
    int roll;
    double cgpa;
    Student(int clss, int roll, double cgpa)
    {
        (*this).clss = clss;
        (*this).roll = roll;
        (*this).cgpa = cgpa;
    }
};
Student* fun ()
{
    Student Lia(9,21,4.78);
    Student *p = &Lia; //having a pointer of Student Data type to store the adress of Lia which has data type of Student
    return p;//returning adress of Lia instead of Lia this time
}
int main()
{
    Student* ans=fun();
    cout <<"Lia "<< ans->clss << " " << ans->roll << " " << ans->cgpa << endl;
    return 0;
}