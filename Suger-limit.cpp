#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int maxSatisfaction = 0;
        for (int L = 0; L <= 100; L++)
        {
            int tasteSum = 0;
            for (int i = 0; i < n; i++)
            {
                if (b[i] <= L && a[i] > 0)
                {
                    tasteSum += a[i];
                }
            }

            int currentSatisfaction = tasteSum - L;
            maxSatisfaction = max(maxSatisfaction, currentSatisfaction);
        }

        cout << maxSatisfaction << endl;
    }

    return 0;
}