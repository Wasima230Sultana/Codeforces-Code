#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = max((3 * a) / 10, a - ((a / 250) * c));
    int y = max((3 * b) / 10, b - ((b / 250) * d));
    if (x > y)
        cout << "Misha\n";
    else if (x < y)
        cout << "Vasya\n";
    else
        cout << "Tie\n";
    return 0;
}