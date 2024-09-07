#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    // sort(starting pointer,ending pointer,greater<data type>());
    //  starting pointer a & ending pointer is till what it will sort(a+n), now it will sort till (a+n-1)th index
    //  a=adress of 0th index, a+2 is the index of 3rd index
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}