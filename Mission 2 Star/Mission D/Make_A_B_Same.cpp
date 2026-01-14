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
        vector<int> a(n), b(n);
        int f1_s1 = INT_MAX, f1_s2 = INT_MAX, zero_aftar_1 = 0;
        bool flag = true, only_0 = true, has_1 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i])
                only_0 = false;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i])
                has_1 = true;
        }

        for (int i = 0; i < n; i++)
            if (a[i] == 1 && a[i] != b[i])
            {
                flag = false;
                break;
            }

        if (a[0] != b[0] || a[n - 1] != b[n - 1])
            flag = false;

        if (only_0 && has_1)
            flag = false;

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}