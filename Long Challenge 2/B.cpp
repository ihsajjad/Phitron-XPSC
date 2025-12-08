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
        bool has_even = false;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2)
                odd++;
            else
                has_even = true;
        }

        int ans = odd % 2;
        if (has_even)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}