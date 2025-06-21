#include <unordered_map>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> m;
    for (int i = 0; i < n - 1; i++)
    {
        string newstr = s.substr(i, 2);
        m[newstr]++;
    }
    string result = "";
    int count = 0;
    for (auto &value : m)
    {
        if (count < value.second)
        {
            count = value.second;
            result = value.first;
        }
    }
    cout << result << endl;
    return 0;
}