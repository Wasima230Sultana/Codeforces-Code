#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    bool canMove = true;
    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s += v[i].second;
        }
        else
        {
            canMove = false;
            break;
        }
    }

    if (canMove)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
