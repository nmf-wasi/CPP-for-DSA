#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int *Lia=new int[input];
    for(int i=0;i<input;i++) 
    {
        cin>>Lia[i];
    }
    for(int i=0;i<input;i++) 
    {
        cout<<Lia[i]<<endl;
    }
    return 0;
}