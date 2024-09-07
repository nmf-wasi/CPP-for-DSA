#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase;t++)
    {
        int Lia;
            cin >> Lia;
        
        // digits
            int first = Lia / 100000;
            int second = (Lia / 10000) % 10;
            int third = (Lia / 1000) % 10;
            int fourth = (Lia / 100) % 10;
            int fifth = (Lia / 10) % 10;
            int sixth = Lia % 10;

            if (first + second + third == fourth + fifth + sixth)
            {
                cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            
    }
        return 0;
}