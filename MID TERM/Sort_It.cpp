#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int Lia[input];
    for (int i = 0;i<input;i++)
    {
        cin >> Lia[i];
    }
    sort(Lia, Lia + input);
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i]<<" ";
    }
    cout << endl;
    sort(Lia, Lia+input,greater<int>());
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i] << " ";
    }
    return 0;
}