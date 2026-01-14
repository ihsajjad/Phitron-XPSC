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
        int ans = 0, cnt = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            int val;
            cin >> val;
            if (val <= n)
                ans += cnt, cnt = 0;
            else
                cnt++;
        }
        cout << ans << endl;
    }

    return 0;
}