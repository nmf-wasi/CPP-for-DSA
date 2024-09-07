#include <bits/stdc++.h>
using namespace std;
int * get_array(int size)
{
    int *a=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int input;
    cin>>input;
    int *Lia=get_array(input);
    for(int i=0;i<input;i++)
    {
        cout<<Lia[i]<<" ";
    }
    return 0;
}