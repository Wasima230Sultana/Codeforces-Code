#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        int root = sqrt(v[i]);
        if (root * root != v[i])
        {
            cout << v[i] << endl;
            break;
        }
    }

    return 0;
}
