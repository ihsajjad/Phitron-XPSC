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

        int mn = min(min(a, b), c);
        a -= mn, b -= mn, c -= mn;
        long long ans = mn * 10;

        ans += a * 3, ans += b * 3, ans += c * 3;
        cout << ans << endl;
    }

    return 0;
}