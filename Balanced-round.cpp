#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        long long validWidth = 1;
        long long j = 0;

        for (long long i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                validWidth = max(validWidth, i - j + 1);
            }
            else
            {
                j = i;
            }
        }

        int toRemove = n - validWidth;
        cout << toRemove << endl;
    }
    return 0;
}
