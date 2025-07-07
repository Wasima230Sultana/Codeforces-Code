#include <iostream>
#include <algorithm>
#include <vector>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());

    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + v[i];
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        long long free_pur = prefix[x] - prefix[x - y];

        cout << free_pur << endl;
    }
    return 0;
}
