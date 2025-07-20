#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countAB = 0, countBA = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                countAB++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                countBA++;
            }
        }
        if (countAB == countBA)
            cout << s << endl;
        else
        {
            if (s[0] == 'a')
                s[0] = 'b';
            else
                s[0] = 'a';
            cout << s << endl;
        }
    }
    return 0;
}