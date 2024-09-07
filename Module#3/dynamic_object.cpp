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
Student *fun()
{
    Student *Lia = new Student(9, 21, 4.78); // having Lia, a pointer of Student Data type to store the adress of dynamic object new student which has data type of studnet
    return Lia;// returning Lia because Lia itself is an address of a dynamic memory
    // *Lia was an adress of the dynamic memory
    // even when the func is closing, if it returns Lia, means, the adress of a dynamic memory is returned.
    // now it can acess object outside this func
}
int main()
{
    Student *ans = fun();
    cout << "Lia " << ans->clss << " " << ans->roll << " " << ans->cgpa << endl;
    delete ans;
    return 0;
}
// Take a SS and explain whole thing in SS in NOTION!!!!


