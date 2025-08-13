#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int min_value = min(a, b);
    cout << (a * b) - min_value << endl;
    return 0;
}
