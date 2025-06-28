#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long z = (a * (b + 1));
        long long x = a;
        long long y = a * b;
        if (x + y == z && x != y && y != z)
        {
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }
        else
            cout << "NO\n";
    }
    return 0;
}