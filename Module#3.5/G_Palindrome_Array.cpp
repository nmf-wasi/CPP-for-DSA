#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin >> input;
    int Lia[input];
    int j = input - 1;
    int flag = 0;
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    for (int i = 0; i <= j; i++)
    {
        if (Lia[i] != Lia[j])
        {
            flag = 1;
            break;
        }
        j--;
    }
    if (flag == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}