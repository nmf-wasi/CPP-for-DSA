#include <bits/stdc++.h>
using namespace std;

int main()
{
    char Lia[100001];
    while (cin.getline(Lia, 100001))
    {
        int len = strlen(Lia);
        sort(Lia, Lia + len);
        for (int i = 0; i < len; ++i)
        {
            if (Lia[i] == ' ')
                continue;
            cout << Lia[i];
        }
        cout << endl;
    }
    return 0;
}
