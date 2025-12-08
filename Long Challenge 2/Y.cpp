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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0;
        int ans = INT_MIN;
        while (r < n)
        {
            if (s[r] != '*')
                l = r + 1;

            ans = max(ans, r - l + 1);
            r++;
        }

        cout << (ans >= k ? "YES" : "NO") << endl;
    }

    return 0;
}