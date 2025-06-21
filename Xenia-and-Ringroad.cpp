#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    long long path = a[0] - 1;

    for (int i = 1; i < m; i++)
    {
        if (a[i] >= a[i - 1])
        {
            path += a[i] - a[i - 1];
        }

        else
        {
            path += n - a[i - 1] + a[i];
        }
    }

    cout << path << endl;
    return 0;
}
