#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        long long sum = ((n + k - 1) / k) * k;
        long long max_element = (sum + n - 1) / n;

        cout << max_element << endl;
    }
    return 0;
}
