#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b, c;
    cin.getline(a.name, 100) >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name, 100) >> b.roll >> b.cgpa;
    getchar();
    cin.getline(c.name, 100) >> c.roll >> c.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    cout << c.name << " " << c.roll << " " << c.cgpa << endl;
    return 0;
    // from 9min
}
