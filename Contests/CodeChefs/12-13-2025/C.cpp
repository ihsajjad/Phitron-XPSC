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
        int n, c, ans = 0;
        cin >> n >> c;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        string s;
        cin >> s;

        bool is_paid = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                ans += arr[i];
            else if (ans >= c)
                if (is_paid)
                    ans += arr[i];
                else
                {
                    ans += (arr[i] - c);
                    is_paid = true;
                }
        }
        cout << ans << endl;
    }

    return 0;
}