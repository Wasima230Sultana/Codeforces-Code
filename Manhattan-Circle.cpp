#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char a[n][m];
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int row = 0;
        for (int i = 0; i < n; i++)
        {
            count1 = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '#')
                    count1++;
            }
            count = max(count, count1);

            // cout<<count<<" " << count1<<endl;
            if (count1 == count)
                row++;
        }
        int col = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '#')
                {
                    col = j + 1;
                    // cout << col <<" " << j<<endl;
                    break;
                }
            }
        }
        cout << row << " " << col << endl;
    }
    return 0;
}