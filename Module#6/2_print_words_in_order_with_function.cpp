#include <bits/stdc++.h>
using namespace std;
void print(stringstream &Lia)
{
    // always send stringstream adress using &
    string word;
    if (Lia >> word)
    // string stream allows to take out word by word from a group. Therefore, if it's possible to take out words, the function should continue. That's the abse case here
    {
        cout << word << endl;
        print(Lia);
    }
}
int main()
{
    string Lia;
    getline(cin, Lia);
    stringstream Yuna(Lia);
    print(Yuna);
    return 0;
}