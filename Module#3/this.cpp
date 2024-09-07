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
int main()
{
    Student Lia(9, 21, 4.56);
    Student Chaer(8, 29, 4.3425);

    cout << "Lia:" << " " << Lia.clss << " " << Lia.roll << " " << Lia.cgpa << endl;
    cout << "Chaer:" << " " << Chaer.clss << " " << Chaer.roll << " " << Chaer.cgpa << endl;
    return 0;
}
