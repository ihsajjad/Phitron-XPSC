#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<int, int> mp, pre_sum;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        mp[a] += 1, mp[b] += -1;
    }
    int mx = INT_MIN;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it == mp.begin())
            pre_sum[it->first] = it->second;
        else
        {
            auto last = --pre_sum.end();
            pre_sum[it->first] = last->second + it->second;
        }
    }

    for (auto it = pre_sum.begin(); it != pre_sum.end(); it++)
        mx = max(mx, it->second);

    cout << mx << endl;

    return 0;
}