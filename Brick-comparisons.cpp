#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int x = v[0], position = 1;
        for (int i = 1; i < n; i++)
        {
            if (x < v[i])
            {
                x = v[i];
                position = i + 1;
            }
        }
        cout << position << endl;
    }
    return 0;
}
