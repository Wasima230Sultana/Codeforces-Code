#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        set<char> digits;
        for (char ch : s)
        {
            digits.insert(ch);
        }

        bool check_good = true;
        for (int j = 0; j <= k; j++)
        {
            if (digits.find(j + '0') == digits.end())
            {
                check_good = false;
                break;
            }
        }
        if (check_good)
            count++;
    }

    cout << count << endl;
    return 0;
}
