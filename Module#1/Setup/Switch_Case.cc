#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    int input;
    cin>>input;
    switch(input)
    {
        case 1:
            cout<<"ONE"<<endl;
            break;
        case 2:
            cout<<"TWO"<<endl;
            break;
        case 3:
            cout<<"THREE"<<endl;
            break;
        case 4:
            cout<<"FOUR"<<endl;
            break;
        case 5:
            cout<<"FIVE"<<endl;
            break;
        case 6:
            cout<<"SIX"<<endl;
            break;
        default:
            cout<<"no match"<<endl;
    }
   return 0;
}