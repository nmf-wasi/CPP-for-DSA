#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    getline(cin,Lia);
    string Yuna = "Jessica";
    stringstream Chaer (Lia);
    string Yeji;
    int count = 0;
    while(Chaer>>Yeji)
    {
        if (Yeji == Yuna)
        {
            count=1;
            break;
        }
    }
    if (count != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}