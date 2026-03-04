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
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        vector<ll> pre_sum;
        pre_sum.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            pre_sum.push_back(pre_sum.back() + val);
            if (i == 0)
                arr[i] = val;
            else
                arr[i] = max(arr[i - 1], val);
                }

        while (q--)
        {
            ll x, l = 0, r = n - 1, mid;
            cin >> x;
            auto it = upper_bound(arr.begin(), arr.end(), x);
            int idx = it - arr.begin();
            cout << pre_sum[idx] << " ";
        }
        cout << '\n';
    }

    return 0;
}