#include <vector>
#include <iostream>
#include <unordered_map>
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
    unordered_map<int, int> s(n);
    for (int i = 0; i < n; i++)
    {
        s[v[i]]++;
    }
    int count = 0;
    for (auto value : s)
    {
        if (count < value.second)
        {
            count = value.second;
        }
    }
    cout << count << " " << s.size() << endl;
    return 0;
}