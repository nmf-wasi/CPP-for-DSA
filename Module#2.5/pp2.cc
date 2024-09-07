#include <bits/stdc++.h>
using namespace std;
void array_size_increase()
{
    int size;
    cin>>size;
    int *Yeji=new int[size];
    int *Yuna=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>Yeji[i];
        Yuna[i]=Yeji[i];
    }
    delete[] Yeji;
    int new_size;
    cin>>new_size;
    Yeji[new_size];
    for(int i=0;i<size;i++)
    {
        Yeji[i]=Yuna[i];
    }
    for(int i=size;i<new_size;i++)
    {
        cin>>Yeji[i];
    }
    for(int i=0;i<new_size;i++)
    {
        cout<<Yeji[i]<<" ";
    }
    delete[] Yeji;
    return;
}
int main()
{
    
    array_size_increase();
    return 0;
}