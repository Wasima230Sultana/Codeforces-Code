#include <iostream>
#include <vector>
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
        char c;
        string s;
        cin >> c >> s;
        s += s;
        int max_wait = 0, next_g = -1;
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                next_g = i;
            if (s[i] == c && next_g != -1)
            {
                int wait = next_g - i;
                if (i < n)
                {
                    max_wait = max(wait, max_wait);
                }
            }
        }
        cout << max_wait << endl;
    }
    return 0;
}
