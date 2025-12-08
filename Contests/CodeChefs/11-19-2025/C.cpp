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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        int ans = 0;
        if (mp[2])
            ans += mp[2] - 1;

        if (mp[3] && mp[1])
            ans += min(mp[1], mp[3]);

        cout << ans << endl;
    }

    return 0;
}