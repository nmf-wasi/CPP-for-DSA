#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char d,e;
    cin>>a>>e>>b>>d>>c;
    if(e== '+')
    {
        if(a+b==c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }
    else if(e== '-')
    {
        if(a-b==c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    if(e== '*')
    {
        if(a*b==c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }

    return 0;
}