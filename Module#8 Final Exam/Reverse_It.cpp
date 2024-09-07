#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        char section;
        int id;
};
int main()
{
    int input;
    cin>>input;
    Student Lia[input];
    for (int i = 0; i < input ; i++)
    {
        cin >> Lia[i].name>> Lia[i].roll>> Lia[i].section>> Lia[i].id;
    }
    int j = input - 1;
    for (int i = 0; i < input; i++)
    {
            if (i<=j)
            {
                swap(Lia[i].section, Lia[j].section);
            }
        j--;
    }
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i].name << " " << Lia[i].roll << " " << Lia[i].section << " " << Lia[i].id << endl;
    }
    return 0;
}