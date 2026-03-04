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
        int num = INT_MIN, ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            if (val >= num)
            {
                num = val;
                ans = mp[val];
            }
        }
        cout << ans << endl;
    }

    return 0;
}