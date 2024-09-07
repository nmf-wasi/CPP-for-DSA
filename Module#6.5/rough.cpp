#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    char Lia[input];
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    int count[26] = {0};
    for (int i = 0; i < input; i++)
    {
        int value = Lia[i] - 'A';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!=0)
        {
           cout << char(i + 'A') << "=" << count[i] << endl;
        }
    }

    return 0;
}