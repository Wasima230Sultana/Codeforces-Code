#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
bool check(int x1, int x2, int y1, int y2)
{
    int minPackage = min(y1, y2);
    int maxPackage = max(y1, y2);
    if (x1 == y1 || x1 == y2)
    {
        return true;
    }
    else if (x2 == y1 || x2 == y2)
    {
        return true;
    }
    else if (x1 > minPackage && x1 < maxPackage)
    {
        return true;
    }
    else if (x2 > minPackage && x1 < maxPackage)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int minWeight = (a - b) * n;
        int maxWeight = (a + b) * n;
        int minPackage = c + d;
        int maxPackage = c - d;
        if (check(minWeight, maxWeight, minPackage, maxPackage))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
