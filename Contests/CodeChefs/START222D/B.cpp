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

        int ans, mx_freq = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;

            if (mp[val] > mx_freq)
            {
                ans = val;
                mx_freq = mp[val];
            }
            if (mp[val] == mx_freq)
            {
                ans = min(val, ans);
            }
        }
        cout << ans << endl;
    }

    return 0;
}