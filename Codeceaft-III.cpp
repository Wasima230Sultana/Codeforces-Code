#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int32_t main()
{
    string s[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string str;
    cin >> str;
    int k;
    cin >> k;
    int n;
    for (int i = 0; i < 12; i++)
    {
        if (s[i] == str)
        {
            n = i + 1;
            break;
        }
    }
    int check;
    check = (n + k) % 12;
    if (check == 0)
        cout << s[11] << endl;
    else
        cout << s[check - 1] << endl;
    return 0;
}
