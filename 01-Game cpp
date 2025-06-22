#include <algorithm>
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
        int countOne = 0, countZero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                countOne++;
            else
                countZero++;
        }
        // if((countOne==0)||(countZero==0))
        // cout<<"NET\n";
        int minCount = min(countOne, countZero);
        if (minCount % 2 == 0)
            cout << "NET\n";
        else
            cout << "DA\n";
    }
    return 0;
}