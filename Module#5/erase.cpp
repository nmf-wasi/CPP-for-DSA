#include <bits/stdc++.h>
using namespace std;
int main()
{
    string Lia = "Yuna is the prettiest";
    Lia.erase(6,7);
    cout << Lia << endl;
    // Lia.erase(the number of the index from where you wanna delete a char, the number of indexes you wanna delete)
    Lia.erase(6);
    // this will erase everything from the 6th index
    cout << Lia << endl;
    return 0;
}
