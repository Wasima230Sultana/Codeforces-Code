#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        double n = 360.0 / (180 - a);

        // convert double to integer
        // if (n == (int)n)
        // if (fmod(360.0, 180 - a) == 0)

        if (fmod(360.0, 180 - a) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
