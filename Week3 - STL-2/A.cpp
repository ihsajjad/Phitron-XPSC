#include <bits/stdc++.h>
using namespace std;

// vector<dp>
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);
    map<int, int> ans; // To keep track the ans for each distinct
    map<int, bool> mp; // To keep track the value counted or not

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    ans[n]++;
    mp[v[n]] = true;

    for (int i = n - 1; i >= 1; i--)
    {
        int val = v[i];
        if (mp[val])
            ans[i] = ans[i + 1];
        else
        {
            ans[i] += ans[i + 1] + 1;
            mp[val] = true;
        }
    }

    while (m--)
    {
        int idx;
        cin >> idx;
        cout << ans[idx] << '\n';
    }
    return 0;
}