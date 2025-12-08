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
        int n;
        cin >> n;

        int ans = 0;

        if (n <= 2)
        {
            cout << ans << endl;
            continue;
        }

        for (int i = 2; i <= n; i += 2)
        {
            int val = (n - i) - 1;
            if (val > 0)
                ans += (n - i) - 1;
        }
        cout << ans << endl;
    }

    return 0;
}