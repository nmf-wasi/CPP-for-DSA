#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia;
    getline(cin, Lia);
    stringstream Yuna;
    Yuna << Lia;//sending words to the constructor 'Yuna' from string "Lia"
    string word;
    while (Yuna >> word)
    {
        cout << word << endl;
    }

    return 0;
}