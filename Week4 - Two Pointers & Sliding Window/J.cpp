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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m), ans;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        int l = 0, r = 0;
        bool flag = true;

        while (l < n || r < m)
        {
            if (l < n && r < m)
            {
                if (!a[l])
                    k++;

                if (!b[r])
                    k++;

                if (a[l] > k || b[r] > k)
                {
                    flag = false;
                    break;
                }
                ans.push_back(min(a[l], b[r]));
                ans.push_back(max(a[l], b[r]));
                l++, r++;
                continue;
            }
            if (l < n)
            {
                if (!a[l])
                    k++;

                if (a[l] > k)
                {
                    flag = false;
                    break;
                }
                ans.push_back(a[l]);
                l++;
            }
            if (r < m)
            {
                if (!b[r])
                    k++;

                if (b[r] > k)
                {
                    flag = false;
                    break;
                }
                ans.push_back(b[r]);
                r++;
            }
        }

        if (flag)
            for (auto it : ans)
                cout
                    << it << " ";
        else
            cout << -1;

        cout << endl;
    }

    return 0;
}