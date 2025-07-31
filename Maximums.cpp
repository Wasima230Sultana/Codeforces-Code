#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> b(n), a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll curMax = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] + curMax;
        curMax = max(curMax, a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
