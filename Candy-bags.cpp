#include <iostream>
#include <vector>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    int left = 1, right = n * n;

    for (int i = 0; i < n; ++i)
    {
        vector<int> r;
        for (int j = 0; j < n / 2; ++j)
        {
            r.push_back(left++);
            r.push_back(right--);
        }
        for (int value : r)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
