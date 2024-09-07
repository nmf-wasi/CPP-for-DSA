#include <bits/stdc++.h>
using namespace std;
class Kids
{
    public:
        int ID;
        char Name[1001];
        char Section;
        int Marks;
};
int main()
{
    int testcase;
    cin >> testcase;
    for (int t = 0; t < testcase;t++)
    {
        Kids studs[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> studs[i].ID >> studs[i].Name >> studs[i].Section >> studs[i].Marks;
        }
        int mx_mark = INT_MIN;
        int index;
        for (int i = 0; i < 3; i++)
        {
            if (studs[i].Marks > mx_mark)
            {
                mx_mark = studs[i].Marks;
                index = i;
            }
        }
        cout << studs[index].ID << " " << studs[index].Name << " " << studs[index].Section << " " << studs[index].Marks << endl;
    }
        return 0;
}