#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    long long x, y;
    cin >> x >> y;

    long long a, b;
    cin >> a >> b;

    if (x < y)
        swap(x, y);

    long long diff = (x - y);
    x = x - diff;
    long long add_a = diff * a;

    if (x == 0 || y == 0)
    {
        cout << add_a << endl;
    }
    else
    {
        long long add_b1 = x * (a * 2);
        long long add_b2 = x * b;
        long long total = (add_a + min(add_b1, add_b2));
        cout << total << endl;
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
