#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int canBye = upper_bound(a, a + n, m) - a;
        cout << canBye << endl;
    }
    return 0;
}