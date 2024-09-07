#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int Yuna[input];
    for(int i=0;i<input;i++)
    {
        cin>>Yuna[i];
    }
        for(int i=0; i<input;i++)
        {
            for(int j=0; j<input-i-1;j++)
            {
                if(Yuna[j]>Yuna[j+1])
                {
                         swap(Yuna[j], Yuna[j + 1]);
                } 
            }
        }
    for (int i =0; i<input; i++)
    {
        cout << Yuna[i] << " ";
    }
    return 0;
}