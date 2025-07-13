#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int make_cost = n * 30;
    int sell_cost = m * 50;
    int cost = sell_cost - make_cost;
    cout << cost << endl;
}
