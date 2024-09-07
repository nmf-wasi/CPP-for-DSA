#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia = "Lia";
    Lia[3]='W';
    cout << Lia << endl;
    // doesnt work
    string Yuna="W";
    Lia+=Yuna;
    cout<<Lia<<endl;
    // works
    Lia += 'W';
    cout << Lia << endl;
    // works
    Lia += "W";
    cout << Lia << endl;
    // works
    string Yuna = "W";
    Lia.append(Yuna);
    cout << Lia << endl;
    // works
    Lia.resize(Lia.size() + 1);
    Lia[3] = 'W';
    cout << Lia << endl;
    // works
    Lia.resize(Lia.size() + 1);
    Lia[Lia.size()+1] = 'A';
    cout << Lia << endl;
    // doesnt work
    Lia.push_back("Wasi");
    cout << Lia << endl;
    // doesnt work
    Lia.push_back('W');
    cout << Lia << endl;
    //works
    return 0;
}
