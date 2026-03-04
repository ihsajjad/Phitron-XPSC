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
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (ans == -1)
                ans = val;
            ans &= val;
        }
        cout << ans << endl;
    }

    return 0;
}