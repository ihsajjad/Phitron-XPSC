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
        vector<pair<int, int>> arr(n, {0, 0});
        for (int i = 0; i < n; i++)
        {
            int f;
            cin >> f;
            arr[i].first = f;
        }
        for (int i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            arr[i].second = p;
        }

        map<int, int> mp;
        for (auto [f, p] : arr)
            mp[f] += p;

        int ans = 0;
        for (auto itm : mp)
            ans = min(ans, itm.second);

        cout << ans << '\n';
    }

    return 0;
}