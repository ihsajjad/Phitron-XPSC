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
        int n, k, t1 = 0, mx_idx = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                t1++;
                mx_idx = max(mx_idx, i + 1);
            }
        }

        int possible_1 = mx_idx - t1;
        cout << (t1 += min(k, possible_1)) << endl;
    }

    return 0;
}