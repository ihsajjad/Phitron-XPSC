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
        int n, q;
        cin >> n >> q;
        vector<int> arr(n), pre_sum(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.rbegin(), arr.rend());

        pre_sum[0] = arr[0];
        for (int i = 1; i < n; i++)
            pre_sum[i] = pre_sum[i - 1] + arr[i];

        while (q--)
        {
            int k, ans = INT_MAX, l = 0, r = n - 1, mid;
            cin >> k;

            auto it = lower_bound(pre_sum.begin(), pre_sum.end(), k);
            if (it == pre_sum.end())
                cout << -1 << '\n';
            else
                cout << (it - pre_sum.begin() + 1) << '\n';
        }
    }

    return 0;
}