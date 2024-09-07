#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int input;
    cin >> input;
    // int *a=new int[input];
    Student *Lia = new Student[input];
    // datatype_name *pointer_name = new datatype [array size];
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i].name >> Lia[i].roll >> Lia[i].mark;
    }
    // taking name input when name is multiple word
    for (int i = 0; i < input; i++)
    {
        for (int j = i + 1; j < input; j++)
        {
            if (Lia[i].mark < Lia[j].mark)
            {
                swap(Lia[i], Lia[j]);
            }
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i].name << " " << Lia[i].roll << " " << Lia[i].mark << endl;
    }
    return 0;
}