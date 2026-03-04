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
        vector<int> arr(n);
        int mn_A = INT_MAX, sum = 0, ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            mn_A = min(arr[i], mn_A);
        }

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            ans = max(ans, sum - arr[i] + val);
        }
        cout << ans << endl;
    }

    return 0;
}