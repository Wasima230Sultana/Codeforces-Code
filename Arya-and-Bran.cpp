#include <iostream>
#include <vector>
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int total = 0;
    int candy_given = 0;

    for (int i = 0; i < n; ++i)
    {
        total += a[i];

        int giveToday = min(8, total);

        candy_given += giveToday;
        total -= giveToday;

        if (candy_given >= k)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
