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
        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mn = min(mn, val);
            mx = max(mx, val);
        }
        cout << mn << " " << mx << endl;
    }

    return 0;
}