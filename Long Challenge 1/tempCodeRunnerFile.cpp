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
        int n, m, k;
        cin >> n >> m >> k;
        int init_diff = abs(n - m);

        if (init_diff < k)
        {
            k -= init_diff;
            cout << k % 2 << '\n';
        }
        else
            cout << init_diff - k << '\n';
    }

    return 0;
}