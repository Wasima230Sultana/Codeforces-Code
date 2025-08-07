#include <iostream>
#include <string>
typedef long long ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x1, x2;
        int p1, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        int length1 = x1.length() + p1;
        int length2 = x2.length() + p2;
        if (length1 > length2)
        {
            cout << ">" << endl;
        }
        else if (length1 < length2)
        {
            cout << "<" << endl;
        }
        else
        {
            while (x1.length() < x2.length())
                x1 += '0';
            while (x2.length() < x1.length())
                x2 += '0';
            if (x1 > x2)
                cout << ">" << endl;
            else if (x1 < x2)
                cout << "<" << endl;
            else
                cout << "=" << endl;
        }
    }

    return 0;
}
