#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> result;
    string temp;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ',')
        {
            result.push_back(stoi(temp)); // convert temp string to int
            temp = "";                    // reset temp
        }
        else
        {
            temp += str[i]; // build the number character by character
        }
    }

    // add the last number after the loop
    if (!temp.empty())
    {
        result.push_back(stoi(temp));
    }

    return result;
}

int main()
{
    string input;
    getline(cin, input); // read the full line like "23,4,56"

    vector<int> numbers = parseInts(input);

    for (int num : numbers)
    {
        cout << num << endl;
    }

    return 0;
}
/*
🔁 Loop Iteration Breakdown:
i	str[i]	temp	Action
0	'2'	"2"	    Not a comma → append to temp
1	'3'	"23"	Not a comma → append to temp
2	','	"23"	Comma → convert "23" to 23, push to vector → reset temp = ""
3	'4'	"4"	    Not a comma → append to temp
4	','	"4"	    Comma → convert "4" to 4, push to vector → reset temp = ""
5	'5'	"5"	    Not a comma → append to temp
6	'6'	"56"	Not a comma → append to temp
end	-	"56"	After loop, temp = "56" → convert to 56, push to vector*/