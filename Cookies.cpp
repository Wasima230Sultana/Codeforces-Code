#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int parity = sum % 2;
    int count = 0;
    for (int x : a)
    {
        if (x % 2 == parity)
            count++;
    }

    cout << count << endl;
    return 0;
}
