#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll minimumCoins(ll n, vector<ll> &v)
{
    int countEven = 0;
    int countOdd = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }
    int coins = min(countEven, countOdd);
    return coins;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << minimumCoins(n, v);
    return 0;
}
