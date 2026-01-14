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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        long long score = 0;
        for (int i = 1; i < n; i++)
            score += min(v[i - 1], v[i]);

        while (q--)
        {
            int i, val;
            cin >> i >> val;

            if (i - 2 >= 0)
            {
                score += min(v[i - 2], val);
                score -= min(v[i - 2], v[i - 1]);
            }
            if (i < n)
            {
                score += min(v[i], val);
                score -= min(v[i - 1], v[i]);
            }

            v[i - 1] = val;
            cout << score << endl;
        }
    }

    return 0;
}