#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    cin>>Lia;
    for (int i = 0; i < Lia.size();i++)
    {
        cout << Lia[i] << endl;
    }
    // when you need to access the index as well 
    for (char Yuna:Lia)
    {
        cout << Yuna << endl;
    }
    // When you only need the output without acessing the index
        return 0;
}