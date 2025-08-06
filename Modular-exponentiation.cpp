#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n >= 31)
    {
        cout << m << endl;
    }
    else
    {
        int ans = m % (1 << n);
        cout << ans << endl;
    }
    return 0;
}
