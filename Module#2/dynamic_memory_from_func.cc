#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a=new int;
    cout<<"from fun func="<<a<<endl;
    *a=100;
    return a;
}
int main()
{
    int * from_func=fun();
    cout<<"value from main func="<<from_func<<endl;
    cout<<"adress from main func="<<*from_func<<endl;
}