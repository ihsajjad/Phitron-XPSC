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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];

            for (int j = 0; j < n; j++)
            {
                if (a[j] > b[i])
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}