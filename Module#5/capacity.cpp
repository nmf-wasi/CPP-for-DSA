#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia = "Hellowww World, Sup!";
    cout <<"Size of= "<< Lia.size() << endl;
    cout <<"Max size= "<< Lia.max_size() << endl;
    string Yuna;
    cout << "Capacity of Lia= " <<Lia.capacity() << endl;
    cout << "Capacity of Yuna= " <<Yuna.capacity() << endl;
    Lia = "asddddddddddddddewrdsfgsdgewtdsdgsdgsdfewtwertgtsdgsgtwertwewegsdgsdgvsdgsd";
    Yuna = "eewtcsdfhgfdgnxcvbszgrthfdcbdfhnjnfhgkmfresfgfdhbfgcvn ghkghjdfghdfhjfghjhg";

    cout << "Capacity of Lia= " <<Lia.capacity() << endl;
    cout << "Capacity of Yuna= " <<Yuna.capacity() << endl;
    if (Lia.empty() == true)
    {
        cout << "Lia is empty" << endl;
    }
    else
    {
        cout << "Lia isnt empty" << endl;
    }
    if (Yuna.empty() == false)
    {
        cout << "Yuna isnt empty" << endl;
    }
    else
    {
        cout << "Yuna is empty" << endl;
    }
    cout << "Size of Lia= " << Lia.size() << endl;
    cout << "Size of Yuna= " << Yuna.size() << endl;
    Lia.clear();
    Yuna.clear();
    cout << Lia << endl;
    cout << Yuna << endl;
    cout << "Size of Lia= " << Lia.size() << endl;
    cout << "Size of Yuna= " << Yuna.size() << endl;
    if(Lia.empty()==true)
    {
        cout << "Lia is empty" << endl;
    }
    else
    {
        cout << "Lia isnt empty" << endl;
    }
    if(Yuna.empty()==false)
    {
        cout << "Yuna isnt empty" << endl;
    }
    else
    {
        cout << "Yuna is empty" << endl;
    }
    return 0;
}