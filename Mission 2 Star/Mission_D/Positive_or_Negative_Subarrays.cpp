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
        ll n;
        cin >> n;
        ll remove = 0;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (val == -1)
                remove += i * 2;
        }

        ll total_sub = (n * (n + 1)) / 2;
        ll ans = abs(total_sub - remove);
        cout << ans << endl;
    }

    return 0;
}