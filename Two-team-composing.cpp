#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int size = m.size();
    int count = 0;
    for (auto value : m)
    {
        count = max(count, value.second);
        if (count == size)
            count--;
    }
    cout << min({size, count, (n / 2)}) << endl;
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