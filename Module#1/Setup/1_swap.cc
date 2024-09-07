#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int Lia,Yuna;
    scanf("%d %d",&Lia,&Yuna);
    cout<<"Before swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna<<endl;
    int temp=Lia;
    Lia=Yuna;
    Yuna=temp;
    cout<<"After swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna;
   return 0;
}
