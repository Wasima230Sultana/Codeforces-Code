#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll s;
        cin >> s;
        long long total = 0;

        while (s >= 10)
        {
            ll spend = (s / 10) * 10;
            ll cashback = spend / 10;
            total += spend;
            s = s - spend + cashback;
        }

        total += s;
        cout << total << endl;
    }

    return 0;
}
