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

        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mx = max(mx, val);
        }

        cout << mx << '\n';
    }

    return 0;
}