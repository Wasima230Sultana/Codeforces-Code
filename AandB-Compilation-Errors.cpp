#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;

    long long a1[n];
    long long a2[n - 1];
    long long a3[n - 2];

    for (long long i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> a2[i];
    }
    for (long long i = 0; i < n - 2; i++)
    {
        cin >> a3[i];
    }

    //sorting O(nlogn)
    sort(a1, a1 + n);
    sort(a2, a2 + (n - 1));
    sort(a3, a3 + (n - 2));

    bool check1 = false;
    bool check2 = false;

    for (long long i = 0; i < n - 1; i++)
    {
        if (a1[i] == a2[i])
        {
            continue;
        }
        else
        {
            cout << a1[i] << endl;
            check1 = true;
            break;
        }
    }
    if (!check1)
        cout << a1[n - 1] << endl;

    for (long long i = 0; i < n - 2; i++)
    {
        if (a2[i] == a3[i])
        {
            continue;
        }
        else
        {
            cout << a2[i] << endl;
            check2 = true;
            break;
        }
    }
    if (!check2)
        cout << a2[n - 2] << endl;

    return 0;
}
