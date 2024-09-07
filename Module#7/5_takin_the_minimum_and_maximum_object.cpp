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
        cin >>Lia[i].name>> Lia[i].age >> Lia[i].mark;
    }
    // taking name input when name is multiple word
    Student min;
    min.mark = INT_MAX;
    for (int i = 0; i < input;i++)
    {
        if (Lia[i].mark < min.mark)
        {
            min = Lia[i];
        }
    }
    cout << min.name << " " << min.age <<" "<<min.mark<< endl;
    Student max;
    max.mark = INT_MIN;
    for (int i = 0; i < input;i++)
    {
        if (Lia[i].mark > min.mark)
        {
            max = Lia[i];
        }
    }
    cout << max.name << " " << max.age <<" "<<max.mark<< endl;
    return 0;
}