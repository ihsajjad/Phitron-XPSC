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
        int ans = 0;
        bool has_wolf = false;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '0' && !has_wolf)
                ans++;
            else
                has_wolf = true;
        }
        cout << ans << endl;
    }

    return 0;
}