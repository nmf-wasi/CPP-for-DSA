#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    int input;
    cin>>input;
    switch(input%3)
    {
        case 0:
            cout<<"WoW"<<endl;
            break;
        case 1:
            cout<<"wOw"<<endl;
            break;
        case 2:
            cout<<"wOOw"<<endl;
            break;
    }
   return 0;
}