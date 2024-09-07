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
        int LiaLen = Lia.length();
        int YejiLen = Yeji.length();

        while (Lia.find(Yeji) != -1)
        {
            Lia.replace(Lia.find(Yeji), YejiLen, "#");
        }
        cout << Lia << endl;
        

    }
    return 0;
}