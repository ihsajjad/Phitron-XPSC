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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long sum = 0;
        // for (int i = 1; i <= x; i++)
        // {
            int mx = x;
            for (int j = 0; j < n; j++)
                mx = max(mx, max(mx + b[j], a[j]));

            sum += mx;
        // }
        cout << sum << endl;
    }

    return 0;
}