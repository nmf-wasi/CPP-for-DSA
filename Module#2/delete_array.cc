#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    int input;
    cin>>input;
    int * Lia= new int[input];
    for(int i=0;i<input;i++)
    {
        cin>>Lia[i];
    }
    for(int i=0;i<input;i++)
    {
        cout<<Lia[i]<<endl;
    }
    delete[] Lia;
    cout<<"AFter delete"<<endl;
    for(int i=0;i<input;i++)
    {
        cout<<Lia[i]<<endl;
    }
}
int main()
{
    int *Yuna= fun();
    return 0;
}