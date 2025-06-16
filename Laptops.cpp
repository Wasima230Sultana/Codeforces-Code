#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
    // sort in ascending order
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), comp); // function call for sorting
    for (auto &result : v)
    {
        if (result.first < result.second)
        {
            cout << "Happy Alex\n";
            return 0;
        }
    }
    cout << "Poor Alex\n";
    return 0;
}