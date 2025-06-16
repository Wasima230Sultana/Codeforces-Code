#include <string>
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;

    string consonant = " ";
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = (tolower(s[i]));
        }

        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'y'))
        {
            continue;
        }
        else
        {
            consonant += s[i];
        }
    }
    for (int i = 0; i < consonant.size(); i++)
    {
        if (i % 2 == 1)
        {
            consonant.insert(i, ".");
        }
    }
    cout << consonant << endl;
    return 0;
}