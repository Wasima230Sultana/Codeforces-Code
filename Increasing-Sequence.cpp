#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll moves = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            ll need = (a[i - 1] + 1 - a[i] + d - 1) / d;
            moves += need;
            a[i] += need * 1LL * d;
        }
    }

    cout << moves << endl;
    return 0;
}
