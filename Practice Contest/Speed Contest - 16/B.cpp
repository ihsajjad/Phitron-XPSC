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
        int n, x;
        cin >> n >> x;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i > x)
            {
                ans += (i - x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}