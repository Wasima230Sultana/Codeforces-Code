#include <vector>
#include <map>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<pair<int, int>, int> m;
    for (int i = 0; i < n; i++)
    {
        int h, mi;
        cin >> h >> mi;
        m[{h, mi}]++;
    }
    int cash = 0;
    for (auto it : m)
    {
        if (cash < it.second)
            cash = it.second;
    }
    cout << cash << endl;
    return 0;
}