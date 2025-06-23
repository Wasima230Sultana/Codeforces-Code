#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int steps = 0, final_steps = 1e+1;
        for (char c : s)
        {
            if (c == '(')
                steps += 1;
            else
                steps -= 1;
            final_steps = min(steps, final_steps);
        }
        cout << final_steps * (-1) << endl;
    }

    return 0;
}