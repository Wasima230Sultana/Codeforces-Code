#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool check = false;
        for (int i = 1; i < n - 1; i++)
        {
            if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
            {
                cout << "YES\n";
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << "NO\n";
        }
    }
    return 0;
}
