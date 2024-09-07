#include <bits/stdc++.h>
using namespace std;
void print(stringstream &Lia)
{
    // always send stringstream adress using &
    string word;
    if (Lia >> word)
    {
        print(Lia);
        cout << word << endl;
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