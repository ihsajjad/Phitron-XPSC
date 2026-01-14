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

        long long a, b, c, k;
        cin >> a >> b >> c >> k;

        long long ans = 0;
        if (a >= k)
            ans += k - 1;
        else
            ans += a;
        if (b >= k)
            ans += k - 1;
        else
            ans += b;
        if (c >= k)
            ans += k - 1;
        else
            ans += c;

        cout << ans + 1 << endl;
    }

    return 0;
}