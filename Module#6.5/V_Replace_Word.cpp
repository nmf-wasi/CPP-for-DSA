#include <bits/stdc++.h>
using namespace std;
int main()
{
    char Lia[100001];

    for (int i = 0; i < 100001; i++)
    {
        cin >> Lia[i];
    }
    int index;
    for (int i = 0; i < strlen(Lia);)
    {
        if (strncmp(&Lia[i], "EGYPT", 5) == 0)
        {
            cout << ' ';
            i += 5;
        }
        else 
        {
            cout << Lia[i];
            i++;
        }
    }
    return 0;
}