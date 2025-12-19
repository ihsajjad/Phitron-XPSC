#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back({val, i});
    }
    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while (l < r)
    {
        int sum = v[l].first + v[r].first;
        if (sum < x)
            l++;
        else if (sum > x)
            r--;
        else
        {
            l = v[l].second + 1;
            r = v[r].second + 1;
            break;
        }
    }

    if (l == r)
        cout << "IMPOSSIBLE\n";
    else
        cout << min(l, r) << " " << max(l, r) << '\n';

    return 0;
}