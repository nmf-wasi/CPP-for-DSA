#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Lia[3];
    for(int i=0;i<3;i++)
    {
        cin>>Lia[i];
    }
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(Lia[i]>mx)
        {
            mx=max(Lia[i],mx);
        }
        if(Lia[i]<mn)
        {
            mn=min(Lia[i],mn);
        }
    }
    cout<<mn<<" "<<mx;
    return 0;
}