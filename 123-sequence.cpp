#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] == 1)
            count1++;
        else if (a[i] == 2)
            count2++;
        else if (a[i] == 3)
            count3++;
    }

    int maxDigit = max({count1, count2, count3});
    int replace = n - maxDigit;

    cout << replace << endl;

    return 0;
}
