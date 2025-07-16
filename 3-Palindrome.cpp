#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n / 2; i++)
    {
        if (i % 2 == 0)
            s += "aa";
        else
            s += "bb";
    }
    if (n == 1)
        s = 'a';
    else if (n % 2 != 0 && s[s.size() - 1] == 'a')
    {
        s += 'b';
    }
    else if (n % 2 != 0 && s[s.size() - 1] == 'b')
    {
        s += 'a';
    }
    cout << s << endl;
    return 0;
}