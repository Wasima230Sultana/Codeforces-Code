#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string str = "hello";
    int check = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == str[check])
            check++;
        if (check == str.size())
            break;
    }
    if (check == str.size())
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}