#include <iostream>
#include <map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int freq = 0;
    for (auto value : m)
    {
        if (value.second > freq)
            freq = value.second;
    }
    if (freq <= (n + 1) / 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
