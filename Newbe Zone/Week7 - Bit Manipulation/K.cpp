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
        int mx = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            mx = max(mx, mp[val]);
        }
        cout << mx << endl;
    }

    return 0;
}