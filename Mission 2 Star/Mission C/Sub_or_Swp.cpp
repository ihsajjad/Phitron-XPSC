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
        int x, y;
        cin >> x >> y;

        while (x)
        {
            int tmp = x;
            x = y % x;
            y = tmp;
        }
        cout << y << endl;
    }
    return 0;
}
