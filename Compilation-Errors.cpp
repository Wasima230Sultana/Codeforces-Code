#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;

    long long a1[n];
    long long a2[n - 1];
    long long a3[n - 2];

    long long x = 0, y = 0, z = 0;

    for (long long i = 0; i < n; i++)
    {
        cin >> a1[i];
        x += a1[i];
    }
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> a2[i];
        y += a2[i];
    }
    for (long long i = 0; i < n - 2; i++)
    {
        cin >> a3[i];
        z += a3[i];
    }

    cout << x - y << endl;
    cout << y - z << endl;

    return 0;
}
