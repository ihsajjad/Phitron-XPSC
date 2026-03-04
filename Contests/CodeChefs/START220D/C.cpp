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
        vector<int> arr(n + 1), arr2(n);
        for (int i = 0; i < n + 1; i++)
            cin >> arr[i];

        int ans = INT_MAX;
        for (int i = 0; i < n + 1; i++)
            ans = min(ans, max(arr[i], arr[i + 1]));

        cout << ans << endl;
    }

    return 0;
}