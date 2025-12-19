#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = 0;
    long long int ans = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[arr[r]]++;

        if (mp.size() > k)
        {
            while (l <= r)
            {
                if (mp.size() <= k)
                    break;

                mp[arr[l]]--;
                if (mp[arr[l]] == 0)
                    mp.erase(mp.find(arr[l]));
                l++;
            }

            if (mp.size() <= k)
                ans += r - l + 1;
        }
        else
            ans += r - l + 1;

        r++;
    }

    cout << ans << '\n';
    return 0;
}