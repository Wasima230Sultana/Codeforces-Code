#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int pos;
    cin >> pos;
    v.erase(v.begin() + (pos - 1));
    int a, b;
    cin >> a >> b;
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    cout << v.size() << endl;
    for (auto value : v)
        cout << value << " ";
    cout << endl;
    return 0;
}