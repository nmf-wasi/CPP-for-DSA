#include<iostream>
#include<iomanip>
using namespace std;
void my_swap(int *Lia, int *Yuna)
{
    int temp=*Lia;
    *Lia=*Yuna;
    *Yuna=temp;
}
int main()
{
    int Lia,Yuna;
    scanf("%d %d",&Lia,&Yuna);
    cout<<"Before swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna<<endl;
    my_swap(&Lia, &Yuna);
    cout<<"After swap="<<endl<<"Lia="<<Lia<<" "<<"Yuna="<<Yuna;

   return 0;
}
