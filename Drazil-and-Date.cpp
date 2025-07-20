#include <iostream>
using namespace std;
int main()
{
    long long a, b, s;
    cin >> a >> b >> s;
    int ans = abs(a) + abs(b);
    int diff = abs(a) - abs(b);
    if ((s - diff) % 2 == 0 && s >= ans)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}