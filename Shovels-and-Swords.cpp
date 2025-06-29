#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    long long a, b;
    cin >> a >> b;
    int result = min((a + b) / 3, min(a, b));
    cout << result << endl;
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
