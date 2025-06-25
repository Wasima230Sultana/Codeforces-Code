#include <iostream>
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string str = "";
    for (int i = 0; i < a; i++)
    {
        str += 'a' + (i % b);
    }

    for (int i = 0; i < n; i++)
    {
        cout << str[i % a];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
