#include <iostream>
using namespace std;

int main()
{
    long long m;
    cin >> m;
    int count = 0;
    while (m)
    {
        count += m % 2;
        m /= 2;
    }
    cout << count << endl;
    return 0;
}
