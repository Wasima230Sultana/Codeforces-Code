#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x > 45)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> digits;
    for (int i = 9; i > 0; i--)
    {
        if (x >= i)
        {
            digits.push_back(i);
            x -= i;
        }
    }

    sort(digits.begin(), digits.end());
    for (int d : digits)
    {
        cout << d;
    }
    cout << endl;
}

int32_t main()
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
