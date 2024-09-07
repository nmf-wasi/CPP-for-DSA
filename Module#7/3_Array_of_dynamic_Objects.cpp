#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int mark;
};
int main()
{
    int input;
    cin >> input;
    // int *a=new int[input];
    Student *Lia= new Student [input];
    // datatype_name *pointer_name = new datatype [array size];
    for (int i = 0; i < input;i++)
    {
        cin.ignore();
        getline(cin, Lia[i].name);
        cin >> Lia[i].age >> Lia[i].mark;
    }
    // taking name input when name is multiple word
    for (int i = 0; i < input;i++)
    {
        cout << Lia[i].name << " " << Lia[i].age << " " << Lia[i].mark << endl;
    }
        return 0;
}