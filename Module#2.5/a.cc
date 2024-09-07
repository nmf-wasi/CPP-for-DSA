#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int Lia[input];
    
    for (int i = 0; i < input; i++)
    {
        cin >> Lia[i];
    }
    
    // Bubble Sort Algorithm
    for (int i = 0; i < input - 1; i++)
    {
        for (int j = 0; j < input - i - 1; j++)
        {
            if (Lia[j] > Lia[j + 1])
            {
                swap(Lia[j], Lia[j + 1]);
            }
        }
    }
    
    for (int i = 0; i < input; i++)
    {
        cout << Lia[i] << " ";
    }
    
    return 0;
}