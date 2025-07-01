#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int digit = 0;

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        int x = i;

        for (int j = 2; j <= x; j++)
        {
            if (x % j == 0)
            {
                count++;
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }

        if (count == 2)
            digit++;
    }

    cout << digit << endl;
    return 0;
}
