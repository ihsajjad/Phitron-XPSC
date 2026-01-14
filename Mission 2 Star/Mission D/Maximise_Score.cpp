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
        int mx = INT_MAX;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int a = 0, b = 0;
            if (i-1 >=0)
                a = abs(arr[i - 1] - arr[i]);
            if (i + 1 < n)
                b = abs(arr[i] - arr[i + 1]);
            int val = max(a, b);
            mx = min(mx, val);
        }
        cout << mx << endl;
    }

    return 0;
}