#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt1 = 1;
        int result = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                cnt1++;
            else
            {
                cnt1 = 1;
                // cout << cnt2<<"%"<<endl;
            }
            result = max({cnt1, result});
        }
        cout << result + 1 << endl;
    }
    return 0;
}