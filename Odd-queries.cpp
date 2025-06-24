#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        long long pf[n + 1];
        pf[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pf[i] = pf[i - 1] + a[i];
        }
        long long sum = pf[n];
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            long long range = pf[r] - pf[l - 1];
            long long newSum = sum - range + (r - l + 1) * 1LL * k;

            if (newSum % 2 == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }

    return 0;
}