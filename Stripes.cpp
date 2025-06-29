#include <iostream>
#include <set>
using namespace std;

void solve()
{
    char ch[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ch[i][j];
        }
    }
    bool check = false;
    for (int i = 0; i < 8; i++)
    {
        int count_red = 0;
        for (int j = 0; j < 8; j++)
        {
            if (ch[i][j] == 'R')
            {
                count_red++;
            }
        }
        if (count_red == 8)
        {
            check = true;
            break;
        }
    }
    if (check)
        cout << "R" << endl;
    else
        cout << "B" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
