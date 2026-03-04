#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll x = l, y = l + 1;
        bool flag = false;
        ll lcm1 = (x * r) / __gcd(x, r);
        cout << "Initial " << __gcd(l, r) << endl;
        while (x < y && y <= r)
        {
            ll lcm = (x * y) / __gcd(x, y);
            // cout << x << " " << y << " LCM " << lcm << endl;
            if (l <= lcm && lcm <= r)
            {
                flag = true;
                break;
            }

            y++;
        }

        if (flag)
            cout << x << " " << y << '\n';
        else
            cout << -1 << " " << -1 << '\n';
    }

    return 0;
}