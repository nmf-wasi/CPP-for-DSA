#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    getline(cin,Lia);
    stringstream Yuna(Lia);
    string Chaer;
    int spaces = 0;
    for(char Yeji:Lia)
    {
        if (Yeji ==' ')
        {
            spaces++;
        }
    }
    while(Yuna>>Chaer)
    {
        reverse(Chaer.begin(),Chaer.end());
        cout << Chaer;
        if(spaces>0)
        {
            cout << ' ';
            spaces--;
        }
        
    }

    return 0;
}