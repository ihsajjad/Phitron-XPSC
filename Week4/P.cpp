#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, x;
    cin >> n >> x;
    vector<pair<long long int, long long int>> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int val;
        cin >> val;
        v.push_back({val, i});
    }
    sort(v.begin(), v.end());

    long long int l = 0, r = n - 1;
    bool flag = false;
    vector<int> ans;

    long long int sum;
    while (l < n && !flag)
    {
        long long int k = l + 1;
        while (l < k && k < r)
        {
            sum = v[l].first + v[k].first + v[r].first;
            cout << l << " " << k << " " << r << endl;
            if (sum == x)
            {
                ans.push_back(v[l].second);
                ans.push_back(v[k].second);
                ans.push_back(v[r].second);
                flag = true;
                break;
            }
            k++;
        }

        if (sum < x)
            l++;
        else if (sum > x)
            r--;
    }

    if (!flag)
        cout << "IMPOSSIBLE\n";
    else
    {
        sort(ans.begin(), ans.end());
        for (int itm : ans)
            cout << (itm + 1) << " ";
    }

    return 0;
}