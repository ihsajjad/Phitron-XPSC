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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int l = 0, r = 0, ans = 0;
        long long sum = 0;
        while (r < n)
        {
            sum += arr[r];
            if (sum == x)
                ans = max(ans, r - l + 1);
            while (sum > x && l < r)
                sum -= arr[l], l++;
            r++;
        }
        cout << (ans ? (n - ans) : -1) << '\n';
    }
    return 0;
}