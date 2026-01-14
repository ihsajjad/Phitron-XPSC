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
        string s;
        cin >> s;

        int ans = 1, level = 0;
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
        }
        cout << ans << endl;
    }

    return 0;
}