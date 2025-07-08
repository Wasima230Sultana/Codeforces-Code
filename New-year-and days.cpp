#include <iostream>
#define int long long
#define endl '\n'
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s,s1;
    cin >> s >> s1;
    if(s1=="month")
    {
        if(n>=1 && n<=29)
        {
            cout << 12 << endl;
        }
        else if(n==30)
        {
            cout << 11 << endl;
        }
        else if(n==31)
        {
            cout << 7 << endl;
        }
    }
    else
    {
        if(n==5 | n==6)
            cout << 53 << endl;
        else
            cout << 52 <<endl;
    }
    return 0;
}

// 2016 is leap year ,so 366 days
// 52 full weeks
// 366%7 = 2,2 extra days
// friday and saturday
