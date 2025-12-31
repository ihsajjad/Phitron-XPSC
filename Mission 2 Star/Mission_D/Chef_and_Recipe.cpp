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
        map<int, int> mp, freq;

        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (mp[val] == 0)
                mp[val] = i;
            else
            {
                int dif = i - mp[val];
                if (dif > 1)
                    flag = false;
                else
                    mp[val] = i;
            }
            freq[val]++;
        }

        for (auto it = freq.begin(); it != freq.end(); it++)
        {
            auto tmp = it;
            for (auto it2 = ++tmp; it2 != freq.end(); it2++)
            {
                if (it->second == it2->second)
                    flag = false;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}