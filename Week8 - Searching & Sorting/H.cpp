#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;
    while (q--)
    {
        int x, l = 0, r = n - 1, ans = 0, mid;
        cin >> x;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (x >= arr[mid])
            {
                ans = max(ans, mid + 1);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}