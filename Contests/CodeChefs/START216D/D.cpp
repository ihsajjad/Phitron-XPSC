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
        vector<int> arr(n), dp(n, 1);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            for (int j = 0; j < i; j++)
            {
                int b = arr[j];
                if ((a ^ b) == abs(a - b))
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            ans = max(ans, dp[i]);
        }

        cout << (ans) << endl;
    }

    return 0;
}