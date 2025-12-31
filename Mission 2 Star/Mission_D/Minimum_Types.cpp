#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return (a.first * a.second) > (b.first * b.second);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> arr(n, {0, 0});
        for (int i = 0; i < n; i++)
            cin >> arr[i].first;
        for (int i = 0; i < n; i++)
            cin >> arr[i].second;

        int ans = 0;
        sort(arr.begin(), arr.end(), cmp);

        for (auto itm : arr)
        {
            if (x <= 0)
                break;
            x -= (itm.first * itm.second);
            ans++;
        }

        cout << (x > 0 ? -1 : ans) << endl;
    }

    return 0;
}