#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    char Yuna[input];
    for(int i=0;i<input;i++)
    {
        cin >> Yuna[i];
    }
    sort(Yuna,Yuna+input);
    for(int i=0;i<input;i++)
    {
        cout << Yuna[i];
    }
    return 0;

}