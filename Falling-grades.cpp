#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        bool lost = false;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
            double avg = (double)sum / (i + 1);
            if (avg < 40.0)
            {
                lost = true;
            }
        }
        cout << (lost ? "No" : "Yes") << endl;
    }
    return 0;
}