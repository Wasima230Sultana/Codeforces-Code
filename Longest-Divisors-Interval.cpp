#include <iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count = 1;
        while (n % count == 0)
        {
            count++;
        }
        cout << count - 1 << endl;
    }

    return 0;
}
