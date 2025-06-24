#include <set>
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int unique_elements[n + 1];
    set<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        unique_elements[i] = s.size();
    }
    while (m--)
    {
        int li;
        cin >> li;
        cout << unique_elements[li - 1] << endl;
    }
    return 0;
}