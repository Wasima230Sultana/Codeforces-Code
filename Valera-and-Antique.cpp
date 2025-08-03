#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, v;
    cin >> n >> v;

    vector<int> sellers;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        bool canBuy = false;

        for (int j = 0; j < k; j++)
        {
            int price;
            cin >> price;
            if (price < v)
            {
                canBuy = true;
            }
        }

        if (canBuy)
        {
            sellers.push_back(i + 1);
        }
    }

    cout << sellers.size() << endl;
    for (int idx : sellers)
    {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
