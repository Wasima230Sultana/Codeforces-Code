#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double A, B, C;
        cin >> A >> B >> C;

        cout << "0x" << hex << nouppercase << (long long)A << endl;
        /*
        hex — switch to hexadecimal base.

        (long long)A — truncate the decimal part (not round!).

        nouppercase — use lowercase letters (e.g., a, b, c...).

        Prefix "0x" — as required in output.
        */
        cout << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;
        /*
        setw(15) — output takes exactly 15 characters.

        setfill('_') — fill empty spaces with underscores _.

        showpos — show + for positive numbers.

        fixed — use normal decimal format (not scientific).

        setprecision(2) — print 2 digits after the decimal point.

        B — print the value.
        */
        cout << scientific << uppercase << setprecision(9) << noshowpos << C << endl;
        /*
        scientific — switch to scientific notation.

        uppercase — use uppercase E in the exponent.

        setprecision(9) — show 9 digits after the decimal point.

        noshowpos — don’t show + for positive numbers.

        C — print the value.
        */
    }
    return 0;
}
