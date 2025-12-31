#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int ans = (min(a, b) * 5);
    if (a > b)
        a -= b, b = 0;
    else
        b -= a, a = 0;
    ans += a + (b * 2);
    cout
        << ans << endl;
    return 0;
}