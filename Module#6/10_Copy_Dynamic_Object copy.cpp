#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;//instead of taking character array, we can take a string to take in input
        int age;
        int rank;
        Person(string name, int age, int rank)//constructor(It's also a funstion, but it donesn't need any return typee)
        {
            this->name = name;
            this->age = age;
            this->rank = rank;
        }
};
int main()
{
    Person * Yuna=new Person ("Shin Yuna", 23, 5);
    Person * Chaer=new Person ("Chaer Honey", 27, 2);

    cout <<"Before assigning"<< "Name: " << Yuna->name << "Age: " << Yuna->age << "Rank: " << Yuna.rank << endl;
    cout << "Before assigning" << "Name: " << Chaer->name << "Age: " << Chaer->age << "Rank: " << Chaer.rank << endl;
    *Yuna=*Chaer;
    // we are chainging the pointer of Yuna from Yuna to Chaer
    cout << "After assigning" << "Name: " << Yuna->name << "Age: " << Yuna->age << "Rank: " << Yuna.rank << endl;
    cout << "After assigning" << "Name: " << Chaer->name << "Age: " << Chaer->age << "Rank: " << Chaer.rank << endl;
    delete Chaer;
    cout << "After deleting" << "Name: " << Yuna->name << "Age: " << Yuna->age << "Rank: " << Yuna.rank << endl;
    cout << "After deleting" << "Name: " << Chaer->name << "Age: " << Chaer->age << "Rank: " << Chaer.rank << endl;

    return 0;
}