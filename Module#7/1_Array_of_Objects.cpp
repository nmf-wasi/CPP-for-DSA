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
    Student Lia[input];
    for (int i = 0; i < input;i++)
    {
        cin >> Lia[i].name>>Lia[i].age>>Lia[i].mark;
    }
    // taking name input when name is single word
    for (int i = 0; i < input;i++)
    {
        cout << Lia[i].name << " " << Lia[i].age << " " << Lia[i].mark << endl;
    }
        return 0;
}