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
        string s;
        cin >> n >> s;
        int ans = 1;
        for (int i = 1; i < n; i++)
            if (s[i - 1] != s[i])
                ans++;

        cout << ans << endl;
    }

    return 0;
}