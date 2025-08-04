#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin >> n;
    string s = to_string(n);
    int len = s.size();
    int firstDigit = s[0] - '0';

    long long power = 1;
    for (int i = 1; i < len; i++)
    {
        power *= 10;
    }
    long long nextLucky = (ll)(firstDigit + 1) * power;
    cout << nextLucky - n << "\n";
    return 0;
}