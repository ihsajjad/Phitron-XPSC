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
        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        int sum = 0;
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int mul = INT_MAX;
            int val1 = a[i];
            for (int j = 0; j < n - cnt; j++)
            {
                int val2 = c[j];
                int total = val1 * val2;
                mul = min(mul, total);
            }
            cnt++;
            sum += mul;
        }

        cout << sum << endl;
    }

    return 0;
}