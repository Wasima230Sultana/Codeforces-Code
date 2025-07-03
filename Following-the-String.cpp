#include <iostream>
#include <unordered_map>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string ans = "";
    unordered_map<char, int> freq;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            if (freq[ch] == arr[i])
            {
                ans += ch;
                freq[ch]++;
                break;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
