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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans += (n - i - 1);

        //((n * (n - 1)) / 2)
        cout << ans << '\n';
    }

    return 0;
}