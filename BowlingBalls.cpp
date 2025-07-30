#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x && a[i] <= y)
            {
                total++;
            }
        }
        cout << total << endl;
    }

    return 0;
}
