#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    set<int> s;

    while (t--)
    {
        int y, x;
        cin >> y >> x;

        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            s.erase(x);
        }
        else
        {
            auto it = s.find(x);
            if (it != s.end())
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
