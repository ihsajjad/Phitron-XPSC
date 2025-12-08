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
        vector<long long> a(n), h(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0, r = 0, ans = 0;
        long long sum = 0;

        while (r < n)
        {
            sum += a[r];

            if ((r + 1 < n) && (h[r] % h[r + 1] == 0) && (sum <= x))
            {
                ans = max((r - l + 1), ans);
            }
            else
            {
                if ((r + 1 < n) && (h[r] % h[r + 1] != 0))
                {
                    if (sum <= x)
                        ans = max(r - l + 1, ans);
                    l = r + 1;
                    sum = 0;
                }
                else
                {
                    if (sum <= x)
                        ans = max(r - l + 1, ans);
                    sum -= a[l], l++;
                }
            }
            r++;
        }
        cout << ans << '\n';
    }

    return 0;
}