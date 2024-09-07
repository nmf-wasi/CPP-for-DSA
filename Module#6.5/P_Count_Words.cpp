#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    getline(cin,Lia);
    stringstream Yuna(Lia);
    string Yeji;
    string Wasi="...";
    int count = 0;
    while (Yuna >> Yeji)
    {
        if(Yeji==Wasi)
        {
            continue;
        } 

        count++;
    }
    cout << count;
    return 0;
}