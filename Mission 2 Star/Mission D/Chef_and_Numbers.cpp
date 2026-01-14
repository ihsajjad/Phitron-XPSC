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
        map<int, int> mp;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = 0;
        }

        int mx = 0, ans;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int last = -1;
            bool toggle = false;
            for (int i = 0; i < n; i++)
            {
                if (it->first == arr[i] && (last != arr[i] || !toggle))
                {
                    mp[it->first]++;
                    if (it->second > mx)
                    {
                        mx = it->second;
                        ans = it->first;
                    }
                    else if (it->second == mx)
                        ans = min(ans, it->first);

                    toggle = true;
                }
                else
                    toggle = false;

                last = arr[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}