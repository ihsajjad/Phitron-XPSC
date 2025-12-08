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
        int n, k;
        cin >> n >> k;
        int t1 = 0, t0 = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '0')
                t0++;
            else
                t1++;
        }

        if (max(t1, t0) <= k + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}