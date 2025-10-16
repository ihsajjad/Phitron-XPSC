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
        int n, chef_pos, k;
        cin >> n >> chef_pos >> k;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if ((chef_pos + (k * 100)) < val)
                mp.insert({val, 0});
        }

        auto it = mp.begin();
        while (k--)
        {
            cout << it->first << " ";
            mp.erase(it);
            it++;
        }

        int pos = mp.size() - k;

        cout << (pos + 1) << '\n';

        // for (auto it : mp)
        // {
        //     cout << it.first << " ";
        // }
        // cout << '\n';
    }

    return 0;
}