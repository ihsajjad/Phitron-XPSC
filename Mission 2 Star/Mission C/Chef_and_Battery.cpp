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
        int ans;
        if (n < 50)
        {
            int rem = 50 - n;
            ans = (rem + 1) / 2;
            if (rem % 2)
                ans += 2;
        }
        else if (n > 50)
        {
            int over = n - 50;
            ans = over / 3;
            ans += 2 * (over % 3);
        }
        else
            ans = 0;
        cout << ans << endl;
    }

    return 0;
}