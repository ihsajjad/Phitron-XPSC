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
        vector<int> pre_fx(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            pre_fx[i] = pre_fx[i - 1] + val;
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int to_be_removed = pre_fx[r] - pre_fx[l - 1];
            int to_be_added = (r - l + 1) * k;
            long long int ans = (pre_fx[n] - to_be_removed) + to_be_added;
            cout << (ans % 2 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}