#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll count = 0;

        while (n > 0)
        {
            if (k > n)
            {
                count += n;
                break;
            }

            if (n % k != 0)
            {
                ll subtract = n % k;
                count += subtract;
                n -= subtract;
            }
            else
            {
                n /= k;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
