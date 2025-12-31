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
        int mx = max(a, max(b, c));
        if (a < b && b < c)
        {
            int k = __lg(mx);
            cout << (1 << (k + 1)) << endl;
        }
        else if (a > b && b > c)
            cout << mx << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}