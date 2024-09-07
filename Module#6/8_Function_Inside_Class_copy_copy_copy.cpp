#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;//instead of taking character array, we can take a string to take in input
        int age;
        int marks1;
        int marks2;
        Person(string nm, int ag, int mk1,int mk2)//constructor(It's also a funstion, but it donesn't need any return typee)
        {
            name=nm;
            //since name and nm are strings, we dont need to use strcpy to copy them
            age=ag;
            marks1=mk1;
            marks2 = mk2;
        }
        void Hello ()
        // Hello function in Person class
        {
            cout << name<<" "<<age << endl;
            // you can simply get your printing done in another function in the class and call that function outside the class to avoid the hassle of typing s.name, s.age bla bla
            
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    Person Yuna("Shin Yuna", 25,88,95);//previously we count send names like this becuase we didnt know size. Now since we are using string class, we can send them like this becuase string class don't need a fixed size
    // cout<<Yuna.name<<endl<<Yuna.age<<endl;
    Yuna.Hello();
    cout<<Yuna.total_marks()<<endl;
    int chaer=Yuna.total_marks();
    cout<<chaer<<endl;
    // YOU HAVE TO TAKE ME TO NOTION!!!!!(5-8)

    return 0;
}