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
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            mp[val] = i;
        }

        int ans = -1;
        for (auto i = mp.begin(); i != mp.end(); i++)
            for (auto j = i; j != mp.end(); j++)
                if (__gcd(i->first, j->first) == 1)
                    ans = max(i->second + j->second, ans);

        cout << ans << endl;
    }

    return 0;
}