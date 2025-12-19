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
        string s;
        cin >> s;

        int ans = 0, cnt = 0;
        bool cycle = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                cnt++;
            else
                cnt = 0;
            ans = max(ans, cnt);

            if (i == n - 1 && !cycle)
            {
                i = -1;
                cycle = true;
            }
        }

        cout << ans << endl;
    }

    return 0;
}