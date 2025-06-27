#include <iostream>
using namespace std;
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool intersect = false;
    bool check = false;
    if (a < b)
    {
        for (int i = a + 1; i < b; i++)
        {
            // cout << i << endl;
            if (i == c)
            {
                intersect = true;
            }
            else if (i == d)
            {
                check = true;
            }
        }
    }
    else
    {
        int store_a = a;
        if (a == 12)
            store_a = 0;
        for (int i = 1; i < ((12 - a) + b); i++)
        {
            store_a++;
            if (store_a == c)
            {
                intersect = true;
            }
            else if (store_a == d)
            {
                check = true;
            }
            if (store_a == 12)
                store_a = 0;
        }
    }
    if (!intersect && check)
        cout << "YES\n";
    else if (intersect && !check)
        cout << "YES\n";
    else
        cout << "NO\n";
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