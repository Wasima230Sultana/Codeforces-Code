#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long size = 1;
    while (n > names.size() * size)
    {
        n -= names.size() * size;
        size *= 2;
    }

    int index = (n - 1) / size;
    cout << names[index] << endl;

    return 0;
}
