#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int with_max = v[n - 1] - v[1];
    int with_min = v[n - 2] - v[0];
    int ans = min(with_max, with_min);
    cout << ans << endl;
    return 0;
}