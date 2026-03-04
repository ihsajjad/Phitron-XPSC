#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        long long ans = 1, level = 0;
        for (char c : s)
        {
            if (c == 'l' && level % 2)
                ans = (ans * 2) - 1;
            else if (c == 'l')
                ans *= 2;
            else if (c == 'r' && level % 2)
                ans = (ans * 2) + 1;
            else if (c == 'r')
                ans = (ans * 2) + 2;

            level++;
        }
        ans %= mod;
        cout << ans << endl;
    }

    return 0;
}