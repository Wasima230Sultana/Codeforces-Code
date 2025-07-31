#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll idx = 1;
    ll min = a[0];
    int count = 0;
    ll number = *(min_element(a.begin(), a.end()));
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            idx = i + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (number == a[i])
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << idx << endl;
    }
    else
    {
        cout << "Still Rozdil\n";
    }
    return 0;
}
