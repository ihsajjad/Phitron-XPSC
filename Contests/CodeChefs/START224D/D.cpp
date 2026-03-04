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
        int b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        if (n < (x + y) || ((b % x) > 0) || ((g % y) > 0))
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = (b + g) / n;
            if ((b + g) % n)
                ans++;
            cout << ans << endl;
        }
    }

    return 0;
}