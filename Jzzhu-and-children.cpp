#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int rounds = 0, lastChild = 0, x = 0;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int rounds = ((a[i] + m - 1) / m);
        v.push_back(rounds);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i]) >= x)
        {
            x = v[i];
            lastChild = i + 1;
        }
    }
    cout << lastChild << endl;

    return 0;
}
