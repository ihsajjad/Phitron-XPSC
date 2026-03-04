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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        int ans = ((a / x) * y) + (a % x) + b;
        if (x > a)
            ans = a + b;
        cout << ans << endl;
    }

    return 0;
}