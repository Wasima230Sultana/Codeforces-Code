#include <iostream>
#include <unordered_map>
using namespace std;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    while (n > 0 && (x / 2) + 10 < x)
    {
        x = (x / 2) + 10;
        n--;
    }
    x = x - (m * 10);
    if (x <= 0)
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
