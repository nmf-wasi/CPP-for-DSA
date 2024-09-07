#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int Lia,Yuna,Yeji, Ryu, Chaer;
    cin >> Lia >> Yuna >> Yeji >> Ryu >> Chaer;
    int mn = min({Lia,Yuna,Yeji, Ryu, Chaer});
    int mx = max({Lia,Yuna,Yeji, Ryu, Chaer});
    cout << "Min=" << mn << endl << "Max=" <<mx;
   return 0;
}


