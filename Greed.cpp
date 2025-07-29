#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end(), greater<ll>());
    if (total <= (b[0] + b[1]))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
