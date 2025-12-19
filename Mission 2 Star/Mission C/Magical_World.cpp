#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x1, x2, y;
        cin >> x1 >> x2 >> y;
        int sq_x = x1 * x2, sq_y = y * y;

        if (sq_x <= sq_y)
            cout << 0 << endl;
        else
        {
            int diff = sq_x - sq_y;
            if (x1 * 1 <= sq_y || x2 * 1 <= sq_y)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}