#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int day = 0;
    while (true)
    {
        sum += v[day];
        if (sum >= n)
        {
            cout << day + 1 << endl;
            break;
        }
        day = (day + 1) % 7;
    }
    return 0;
}
