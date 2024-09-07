#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int clss;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};
int main()
{
    int input;
    cin >> input;
    Student Lia[input];
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i].name >> Lia[i].clss >> Lia[i].section >> Lia[i].id >> Lia[i].math_marks >> Lia[i].eng_marks;
    }

    for (int i = 0; i < input-1; i++)
    {
        for(int j=i+1;j<input;j++)
        {
            if (Lia[i].math_marks+Lia[i].eng_marks < Lia[j].math_marks+Lia[j].eng_marks)
            {
                swap(Lia[i],Lia[j]);
            }
            if (Lia[i].math_marks+Lia[i].eng_marks == Lia[j].math_marks+Lia[j].eng_marks)
            {
                if(Lia[i].id > Lia[j].id)
                {
                    swap(Lia[i],Lia[j]);
                }
            }
        
        }
    }
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i].name << " " << Lia[i].clss << " " << Lia[i].section << " " << Lia[i].id << " " << Lia[i].math_marks << " " << Lia[i].eng_marks << endl;
    }
    return 0;
}