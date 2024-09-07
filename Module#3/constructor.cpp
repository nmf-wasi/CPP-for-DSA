#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int clss;
    int roll;
    double cgpa;
    Student(int r, int c, int g)
    {
        roll = r;
        clss = c;
        cgpa = g;
    }
};
int main()
{
    Student Lia(9,21,4.56);
    Student Chaer(8,29,4.42);

    cout << "Lia:" << " " << Lia.clss << " " << Lia.roll << " " << Lia.cgpa << endl;
    cout << "Chaer:" << " " << Chaer.clss << " " << Chaer.roll << " " << Chaer.cgpa << endl;
    return 0;

}
