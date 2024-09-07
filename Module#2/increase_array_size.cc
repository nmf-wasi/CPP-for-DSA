#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    int input;
    cin>>input;
    int * Lia= new int[3];
    int * Yuna= new int[3];
    for(int i=0;i<3;i++)
    {
        cin>>Lia[i];
        Yuna[i]=Lia[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<Lia[i]<<endl;
    }
    delete[] Lia;
    Lia= new int[5];
    for(int i=0;i<3;i++)
    {
        Lia[i]=Yuna[i];
    }
    Lia[3]=40;
    Lia[4]=50;
    cout<<"AFter increasing"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<Lia[i]<<endl;
    }
    return 0;
}
int main()
{
    int *Yuna= fun();
    return 0;
}