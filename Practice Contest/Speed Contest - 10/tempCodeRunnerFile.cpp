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
        int max_freq = 0, t0 = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;

            if (val == 0)
                t0++;
            else
                max_freq = max(max_freq, mp[val]);
        }

        int highest_val = max(max_freq, max_freq + t0);
        int ans = (highest_val * (highest_val - 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}