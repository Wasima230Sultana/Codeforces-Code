#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll numberOfJokes = 0;
    ll time = ((n - 1) * 10);
    sum = sum + time;
    if (sum > d)
    {
        cout << -1 << endl;
    }
    else
    {
        numberOfJokes = time / 5;
        if (sum < d)
        {
            ll extra_time = d - sum;
            ll add = extra_time / 5;
            numberOfJokes += add;
        }
        cout << numberOfJokes << endl;
    }
    return 0;
}
