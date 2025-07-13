#include <map>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int total = 0;
        int y = 0, z = 0;
        for (auto it : m)
        {
            int x = ((it.first * (n - z) * 50) + (y * 50)) - (it.first * n * 30);
            z += it.second;
            y += (it.second * it.first);
            sum += it.first;
            if (x > 0)
            {
                total = max(x, total);
                x = total;
            }
        }
        cout << total << endl;
    }
    return 0;
}