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
        int c = INT_MAX;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
                c = min(c, arr[i] - arr[i - 1]);
        }

        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            float diff = arr[i] - arr[i - 1];
            int elem = ceil(diff / c);
            if (elem - 1 > 0)
                ans += (elem - 1);
        }
        cout << ans << endl;
    }

    return 0;
}