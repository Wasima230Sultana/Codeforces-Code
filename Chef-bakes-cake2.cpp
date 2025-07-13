#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
                total += (a[i] - b[i]);
        }
        cout << total << endl;
    }
    return 0;
}