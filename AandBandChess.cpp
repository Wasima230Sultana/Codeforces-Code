#include <map>
#include <iostream>
using namespace std;
int main()
{
    char ch[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ch[i][j];
        }
    }
    map<char, int> piecevalue{
        {'Q', 9}, {'R', 5}, {'B', 3}, {'N', 3}, {'P', 1}, {'q', 9}, {'r', 5}, {'b', 3}, {'n', 3}, {'p', 1}};
    int white = 0, black = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char c = ch[i][j];
            piecevalue.count(c);
            if (isupper(c))
                white += piecevalue[c];
            else
                black += piecevalue[c];
        }
    }
    if (white > black)
        cout << "White\n";
    else if (white < black)
        cout << "Black\n";
    else
        cout << "Draw\n";
    return 0;
}