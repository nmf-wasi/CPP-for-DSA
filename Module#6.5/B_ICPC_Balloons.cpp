#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    for(int t=0;t<testcase;t++)
    {
    int input;
    cin >> input;
    char Lia[input];
    for (int  i  = 0;  i  < input; i++)
    {
        cin >> Lia[i];
    }
    int count[26] = {0};
    for (int i = 0; i < input; i++)
    {
        int value = Lia[i] - 'A';
        if (count[value]==0)
        {
            count[value] += 2;
        }
        else
        {
            count[value]++;
        }
    }
    int total=0;
    for (int i = 0; i < 26; i++)
    {        
            total += count[i];
    }
    cout << total<< endl;
    }
    return 0;
}