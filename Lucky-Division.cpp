#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    int countDigit = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            count++;
        else if (s[i] == '7')
            count++;
    }
    if (count == s.size())
        cout << "YES\n";
    else
    {
        bool check = false;
        int num = stoi(s); // convert string to integer
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                // cout<<i<<endl;
                string str = to_string(i); // convert integer to string
                for (int j = 0; j < str.size(); j++)
                {
                    if (str[j] == '4')
                        countDigit++;
                    else if (str[j] == '7')
                        countDigit++;
                }
                if (str.size() == countDigit)
                {
                    // cout<<str.size()<<endl;
                    // cout <<countDigit<<endl;
                    check = true;
                    break;
                }
                else
                {
                    countDigit = 0;
                }
            }
        }
        if (check)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}