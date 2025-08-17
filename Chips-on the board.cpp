#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll sumA = accumulate(a.begin(), a.end(), 0LL);
        ll sumB = accumulate(b.begin(), b.end(), 0LL);
        ll minA = *min_element(a.begin(), a.end());
        ll minB = *min_element(b.begin(), b.end());

        ll rows = sumA + n * minB;
        ll cols = sumB + n * minA;

        cout << min(rows, cols) << "\n";
    }
    return 0;
}
