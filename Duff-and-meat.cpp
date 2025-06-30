#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long minPrice = 1e9;
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        minPrice = min(minPrice, y);
        total += x * minPrice;
    }
    cout << total << endl;
    return 0;
}