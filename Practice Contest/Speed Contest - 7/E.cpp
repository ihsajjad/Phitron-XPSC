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
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n), arr;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]])
                mp[a[i]] = min(mp[a[i]], b[i]);
            else
                mp[a[i]] = b[i];
        }

        for (auto it : mp)
            arr.push_back(it.second);

        sort(arr.begin(), arr.end());

        int mx = INT_MIN;
        int y = 0;
        for (int i = 1; i <= mp.size(); i++)
        {
            y += arr[i - 1];
            mx = max(mx, ((i * c) - y));
        }

        cout << (mx < 0 ? 0 : mx) << endl;
    }

    return 0;
}