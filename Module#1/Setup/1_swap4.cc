#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int Lia,Yuna;
    scanf("%d %d",&Lia,&Yuna);
    cout<<"Before swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna<<endl;
    swap(Lia, Yuna);
    cout<<"After swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna;
   return 0;
}
