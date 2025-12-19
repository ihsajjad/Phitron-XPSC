#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    map<string, int> mp;
    pair<string, int> ans;

    for (int i = 1; i < n; i++)
    {
        string sub(1, s[i - 1]);
        sub.push_back(s[i]);

        mp[sub]++;

        if (mp[sub] > ans.second)
        {
            ans.first = sub;
            ans.second = mp[sub];
        }
    }
    cout << ans.first << '\n';

    return 0;
}