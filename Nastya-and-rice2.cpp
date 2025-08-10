#include <iostream>
using namespace std;

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
        int minPackage = (c - d);
        int maxPackage = (c + d);

        if (minWeight <= maxPackage && maxWeight >= minPackage)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
