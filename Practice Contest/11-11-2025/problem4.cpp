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
        int n, odd = 0, even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2)
                odd++;
            else
                even++;
        }

        int ans = 0;

        if (odd == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            ans += even;
            if (odd <= 2)
                ans++;
            else
            {
                ans += (odd / 2) + 1;
            }
        }
        cout << ans << endl;
        // cout << odd << " " << even << " Ans = " << ans << endl;
    }

    return 0;
}