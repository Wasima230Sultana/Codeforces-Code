#include <iostream>
using namespace std;

int main()
{
    int date;
    cin >> date;
    if (date > 15)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (15 - date) << endl;
    }
    return 0;
}
