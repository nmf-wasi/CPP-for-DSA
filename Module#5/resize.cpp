#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia = "Hellowww World, Sup!";
    cout << "Size of= " << Lia.size() << endl;
    cout << Lia << endl;
    Lia.resize(25);
    cout << Lia << endl;
    cout << "Size of= " << Lia.size() << endl;
    Lia.resize(5);
    cout << Lia << endl;
    cout << "Size of= " << Lia.size() << endl;
    Lia.resize(25,'W');
    cout << Lia << endl;
    cout << "Size of= " << Lia.size() << endl;
    return 0;
}