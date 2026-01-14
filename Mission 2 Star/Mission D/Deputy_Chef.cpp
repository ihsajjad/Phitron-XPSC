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
        list<pair<int, int>> ls(n, {0, 0});
        for (auto it = ls.begin(); it != ls.end(); it++)
            cin >> it->first;

        for (auto it = ls.begin(); it != ls.end(); it++)
            cin >> it->second;

        int ans = INT_MIN;
        for (auto it = ls.begin(); it != ls.end(); it++)
        {
            pair<int, int> prev = *it, nx = *it;
            if (it == ls.begin())
            {
                prev = ls.back();
                nx = *next(it, 1);
            }
            else if (it == --ls.end())
            {
                prev = *next(it, -1);
                nx = ls.front();
            }
            else
                prev = *next(it, -1), nx = *next(it, 1);

            if (it->second > (prev.first + nx.first))
                ans = max(ans, it->second);
                }

        cout << (ans == INT_MIN ? -1 : ans) << endl;
    }

    return 0;
}