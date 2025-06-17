#include <iostream>
using namespace std;

bool isPossible(int a, int b, int c)
{
    if ((2 * b - c) % a == 0 && ((2 * b - c) / a) > 0)
        return true;

    else if ((a + c) % (2 * b) == 0 && ((a + c) / (2 * b)) > 0)
        return true;

    else if ((2 * b - a) % c == 0 && ((2 * b - a) / c) > 0)
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (isPossible(a, b, c))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
