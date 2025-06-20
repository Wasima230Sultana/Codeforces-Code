#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upperLetters = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            upperLetters++;
    }
    if (upperLetters == s.size())
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else if ((islower(s[0])) && (upperLetters == (s.size() - 1)))
    {
        s[0] = (toupper(s[0]));
        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}