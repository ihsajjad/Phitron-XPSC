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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        long long base = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            base += arr[i];
        }

        sort(arr.begin(), arr.end());

        long long ans = base;
        for (int k = 1; k < m; k++)
        {
            int target = m - k;
            auto it = lower_bound(arr.begin(), arr.end(), target);
            int overflow = int(arr.end() - it);
            long long sum = base + 1LL * n * k - 1LL * overflow * m;
            ans = min(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}