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
        vector<int> v(11, 0);
        for (int i = 0; i < n; i++)
        {
            int p, s;
            cin >> p >> s;
            v[p] = max(v[p], s);
        }

        int ans = 0;
        for (int i = 1; i <= 8; i++)
            ans += v[i];

        cout << ans << '\n';
    }

    return 0;
}