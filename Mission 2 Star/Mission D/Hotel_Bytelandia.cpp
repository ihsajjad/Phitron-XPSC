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
        map<int, int> mp, pre_sum;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]--;
        }
        int mx = INT_MIN;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            auto tmp = it;
            if (it == mp.begin())
                pre_sum[it->first] = it->second;
            else
                pre_sum[it->first] = pre_sum[(--tmp)->first] + it->second;

            mx = max(mx, pre_sum[it->first]);
        }

        cout << mx << endl;
    }

    return 0;
}