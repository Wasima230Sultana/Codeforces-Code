#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int ans = A * 3;
    if (ans <= B)
        cout << "Rain\n";
    else
        cout << "Dry\n";
}