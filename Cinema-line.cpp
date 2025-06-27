#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];

    int cnt_25 = 0, cnt_50 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] == 25)
        {
            cnt_25++;
        }
        else if (a[i] == 50)
        {
            if (cnt_25 == 0)
            {
                cout << "NO\n";
                return 0;
            }
            cnt_25--;
            cnt_50++;
        }
        else if (a[i] == 100)
        {
            if (cnt_50 > 0 && cnt_25 > 0)
            {
                cnt_50--;
                cnt_25--;
            }
            else if (cnt_25 >= 3)
            {
                cnt_25 -= 3;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}
