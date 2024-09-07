#include <bits/stdc++.h>
using namespace std;
void print_1(string Lia)
{
    Lia = "I wanna change!";
    // didn't receive address, therefore, whatever changes here won't affect outside

}
void print_2(string& Lia)
{
    Lia = "I wanna change!";
    // received address, therefore, whatever changes here will affect outside
}
int main()
{
    string Lia = "Hi there,sup!";
    print_1(Lia);
    cout << Lia << endl;
    // can't send a pointer becasue string is a build-in class, they can't send adress
    print_2(Lia);
    cout << Lia << endl;
    return 0;
}