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
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            auto it = mp.find(val);
            if (it != mp.end())
            {
                mp[val] = {i, it->second.second + 1};
            }
            else
                mp.insert({val, {i, 1}});
        }

        int idx = 0;

        for (auto [it, pr] : mp)
        {
            if (pr.second == 1)
            {
                idx = pr.first;
                break;
            }
        }

        cout << (idx + 1) << endl;
    }

    return 0;
}