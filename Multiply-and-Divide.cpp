#include <iostream>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    int store = n;
    if (n == 1)
    {
        cout << 0 << endl;
    }

    else
    {
        int steps = 0;
        bool check = false;
        while (n >= 1)
        {
            if (n == 1)
                break;
            if (n == 2)
            {
                check = true;
                break;
            }
            if (n % 6 == 0)
            {
                steps++;
                n = n / 6;
                // cout<<n<<endl;
            }

            else
            {
                n = n * 2;
                steps++;
                // cout<<n<<endl;
            }
            if (n > store * 2)
            {
                check = true;
                break;
            }
        }
        if (check)
            cout << -1 << endl;
        else
            cout << steps << endl;
    }
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