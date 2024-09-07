#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase; t++)
    {
        string Lia;
        cin >> Lia;
        string Yeji;
        cin >> Yeji;

        for (int i = 0; i < Lia.size(); i++)
        {
            for(int j=0; j<Yeji.size();)
            {
                if(Lia[i]==Yeji[j])
                {
                    j++;
                }
                else
                    break;
            }
        }
        cout << Lia << endl;
        

    }
    return 0;
}