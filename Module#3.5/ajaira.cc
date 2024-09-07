#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase; t++)
    {
        int input;
        cin >> input;
        vector<int> Lia(input);
        int mn = INT_MAX;

        for (int i = 0; i < input; i++)
        {
            cin >> Lia[i];
        }

        for (int i = 0; i < input; i++)
        {
            for (int j = i + 1; j < input; j++)
            {
                int minimum = Lia[i] + Lia[j] + (j - i);
                mn = min(mn, minimum);
            }
        }

        cout << mn << endl;
    }
    return 0;
}
