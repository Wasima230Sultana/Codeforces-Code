#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool check = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            check = true;
            break;
        }
    }
    if (check)
        cout << s << endl;
    else
    {
        s.erase(1, 1);
        cout << s << endl;
    }

    return 0;
}