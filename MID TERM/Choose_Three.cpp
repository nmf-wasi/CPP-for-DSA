#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase;t++)
    {
            int input, ans;
        cin>>input>>ans;
        int Lia[input];
        int flag = 0;
        for (int i = 0; i < input; i++)
        {
            cin >> Lia[i];
        }
        for (int i = 0; i < input;i++)
        {
            for (int j = i+1; j < input; j++)
            {
                for (int k = j+1; k < input;k++)
                {
                    if(Lia[i]+Lia[j]+Lia[k]==ans)
                    {
                        flag=1;
                        break;
                    }
                }

                if (flag == 1)
                {
                    break;
                }
            }

            if (flag == 1)
            {
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else if (flag==0)
        {
            cout << "NO" << endl;
        }
    }
        return 0;
}