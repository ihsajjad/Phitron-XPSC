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
        int x, y, ans = 0;
        cin >> x >> y;

        if (__gcd(x, y) > 1)
            ans = 0;
        else
        {
            if (__gcd(x, y + 1) > 1 || __gcd(x + 1, y) > 1)
                ans = 1;
            else
                ans = 2;
        }

        cout << ans << endl;
    }

    return 0;
}