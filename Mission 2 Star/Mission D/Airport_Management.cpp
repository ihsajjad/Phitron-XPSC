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
        vector<int> arr(n), dpp(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
        }

        int ans = 0;
        for (auto itm : freq)
            ans = max(ans, itm.second);

        cout << ans << endl;
    }

    return 0;
}