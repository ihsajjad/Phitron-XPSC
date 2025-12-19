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
        int n, k;
        cin >> n >> k;
        map<int, pair<int, int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;

            auto it = mp.find(val);
            if (it != mp.end())
                // Storing the max and min index for each station
                mp[val] = {max(mp[val].first, i), min(mp[val].second, i)};
            else
                mp.insert({val, {i, i}});
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;

            auto it_a = mp.find(a);
            auto it_b = mp.find(b);

            if (it_a != mp.end() && it_b != mp.end())
            {
                int mn_a = it_a->second.second;
                int mx_b = it_b->second.first;

                if (mx_b > mn_a)
                    cout << "YES" << '\n';
                else
                    cout << "NO" << '\n';
            }
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}