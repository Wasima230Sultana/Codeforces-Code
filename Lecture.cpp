#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = (a.size() <= b.size() ? a : b);
    }

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        cout << mp[word] << " ";
    }
    cout << endl;
    return 0;
}
