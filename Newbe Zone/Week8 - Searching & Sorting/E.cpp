#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, cnt = 1;
    while (cin >> n >> q)
    {
        if (n == 0 || q == 0)
            break;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());

        map<int, int> mp;
        for (int i = 0; i < n; i++)
            if (!mp[arr[i]])
                mp[arr[i]] = i + 1;

        cout << "CASE# " << cnt << ":" << '\n';
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            if (mp[x])
                cout << x << " found at " << mp[x] << '\n';
            else
                cout << x << " not found\n";
        }

        cnt++;
    }

    return 0;
}