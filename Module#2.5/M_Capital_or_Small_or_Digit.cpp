#include <bits/stdc++.h>
using namespace std;
int main()
{
    char Yuna;
    cin>>Yuna;
    if(Yuna>='0' && Yuna<='9')
    {
        cout<<"IS DIGIT";
    }
    else if(Yuna>='A' && Yuna<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(Yuna>='a' && Yuna<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}