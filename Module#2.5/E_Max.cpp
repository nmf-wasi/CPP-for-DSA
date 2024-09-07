#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    long long int Yuna[input];
    for(int i=0;i<input;i++)
    {
        cin>>Yuna[i];
    }
    long long int mx=INT_MIN;
    for(int i=0;i<input;i++)
    {
         if(Yuna[i]>mx)
         {
            mx=max(Yuna[i],mx);
         }
    }
    cout<<mx;
    return 0;
}