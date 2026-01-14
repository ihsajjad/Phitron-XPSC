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
            char c;
            cin >> c;
            mp[c]++;
        }

        int cnt_odd = 0;
        for (auto it : mp)
            if (it.second % 2)
                cnt_odd++;

        int ans = 0;
        if (cnt_odd == 0)
            ans = 1;
        else if (cnt_odd == 1)
        {
            if (mp.size() >= 2)
                ans = 1;
            else
                ans = (n % 2) ? 2 : 1;
        }

        cout << ans << endl;
    }

    return 0;
}