#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;
    int month[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }

    sort(month, month + 12, greater<int>());//sort in descending order

    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int growth = 0;
    int needMonth = 0;
    for (int i = 0; i < 12; i++)
    {
        growth += month[i];
        needMonth++;
        if (growth >= k)
        {
            cout << needMonth << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
