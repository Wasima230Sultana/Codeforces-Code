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
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int extra = 0;
        while (true)
        {
            int alice = c + extra;
            bool hasLess = false;
            bool hasEqual = false;
            for (int i = 0; i < n; i++)
            {
                if (v[i] < alice)
                    hasLess = true;
                if (v[i] == alice)
                    hasEqual = true;
            }
            if (hasLess && !hasEqual)
                break;
            extra++;
        }
        cout << extra << endl;
    }
    return 0;
}
