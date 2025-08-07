#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    int pos = 1;
    while (pos < t)
    {
        pos = pos + a[pos - 1];
    }
    if (pos == t)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
