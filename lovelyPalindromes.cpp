#include <iostream>
#include <string>
#include <algorithm>
#define endl '\n'
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << s;
    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}
