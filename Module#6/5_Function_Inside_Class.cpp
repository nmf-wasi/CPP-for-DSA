#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;//instead of taking character array, we can take a string to take in input
        int age;
        Person(string nm, int ag)//constructor(It's also a funstion, but it donesn't need any return typee)
        {
            name=nm;
            //since name and nm are strings, we dont need to use strcpy to copy them
            age=ag;
        }
};
int main()
{
    Person Yuna("Shin Yuna", 25);//previously we count send names like this becuase we didnt know size. Now since we are using string class, we can send them like this becuase string class don't need a fixed size
    cout<<Yuna.name<<endl<<Yuna.age<<endl;
    return 0;
}