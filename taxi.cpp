#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int needTaxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) count1++;
        else if ( a[i] == 2) count2++;
        else if ( a[i] == 3) count3++;
        else if ( a[i] == 4) count4++;

    }

    int add = min (count1, count3);
    count1 = count1 - add;
    count3 = count3 - add;
    needTaxi = needTaxi + add + count4 + count3 + ( count2 / 2 );
    count2 = ( count2 % 2 );
    if ( count2 == 1)
    {
        if( count1 >= 2)
            count1 -= 2;
        else
            count1 = 0;
        needTaxi += 1;
    }
    needTaxi += ( count1 / 4 );
    count1 = count1 % 4;
    if ( count1 != 0 )
        needTaxi += 1;

    cout << needTaxi << endl ;
}


int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve ();

    return 0;
}



