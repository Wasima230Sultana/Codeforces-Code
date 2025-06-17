#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    vector<int> prefix(n, 0);
    for (int i = 1; i < n; ++i)
    {
        prefix[i] = prefix[i - 1] + (s[i] == s[i - 1]);
    }

    long long q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << prefix[r] - prefix[l] << endl;
    }

    return 0;
}
