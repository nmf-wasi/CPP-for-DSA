#include <bits/stdc++.h>
using namespace std;
int * fun() //since we will be retuning address, we will be using pointer
{
    int input;
    cin>>input;
    int *Lia=new int[input];
    for(int i=0;i<input;i++)
    {
        cin>>Lia[i];
    }
    return Lia;// a is the adress of the first index which we will be returning
}
int main()
{
    int *Yuna= fun();
    for(int i=0;i<5;i++)
    {
        cout<<Yuna[i]<<endl;
    }
    return 0;
}