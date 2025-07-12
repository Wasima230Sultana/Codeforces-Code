#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ct1 = 0, ct2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                ct1++;
            else
                ct2++;
        }
        if (ct1 % 2 != 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}