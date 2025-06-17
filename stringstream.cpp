#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str); // turn the string into stream
    int number;
    char comma;

    while (ss >> number) // read number like cin
    {
        result.push_back(number); // save the input to vector
        ss >> comma;              // skip the comma
    }

    return result;
}

int main()
{
    string input;
    cin >> input;

    vector<int> numbers = parseInts(input);

    for (int num : numbers)
    {
        cout << num << endl;
    }

    return 0;
}
