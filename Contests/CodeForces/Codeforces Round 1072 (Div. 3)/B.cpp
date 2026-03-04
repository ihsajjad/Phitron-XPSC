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
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && a < c)
            cout << 0 << endl;
        else if (a >= b && c > b)
        {
            cout << min(b, c - b) << endl;
        }
        else if (a > b && b >= c)
        {
            cout << c << endl;
        }
    }

    return 0;
}