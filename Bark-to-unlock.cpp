#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;

    vector<string> words(n);
    bool endsWithFirst = false;
    bool startsWithSecond = false;

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
        if (words[i] == s)
        {
            cout << "YES\n";
            return 0;
        }
        if (words[i][1] == s[0])
            endsWithFirst = true;
        if (words[i][0] == s[1])
            startsWithSecond = true;
    }

    if (endsWithFirst && startsWithSecond)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
