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

        int mn = arr[0], mx = arr[n - 1];
        for (int i = 1; i < n; i++)
            mn += 2 * arr[i];
        for (int i = n - 2; i >= 0; i--)
            mx = (2 * mx) + arr[i];
        cout << mn << " " << mx << endl;
    }

    return 0;
}