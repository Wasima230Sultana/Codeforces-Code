#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;

        unordered_map<char, int> freq;
        for (char ch : s)
        {
            freq[ch]++;
        }

        int oddCount = 0;
        for (auto it : freq)
        {
            if (it.second % 2 != 0)
            {
                oddCount++;
            }
        }

        int remaining = n - k;
        if (oddCount <= k + (remaining % 2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
