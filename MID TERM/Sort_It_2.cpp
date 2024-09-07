#include <bits/stdc++.h>
using namespace std;
int*sort_it(int size)
{
    int *Lia = new int [size];
    for(int i=0;i<size;i++)
    {
        cin >> Lia[i];
    }
    sort(Lia, Lia + size, greater<int>());
    return Lia;
}
int main()
{
    int input;
    cin>>input;
    int *Yuna = sort_it(input);
    for (int i = 0; i < input;i++)
    {
        cout << Yuna[i]<<" ";
    }

        return 0;
}