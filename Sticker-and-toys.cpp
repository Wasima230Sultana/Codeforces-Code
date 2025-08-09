#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, t;
        cin >> n >> s >> t;
        ll sticker = n - t;
        ll toy = n - s;
        ll result = max(sticker, toy) + 1;
        cout << result << endl;
    }

    return 0;
}
