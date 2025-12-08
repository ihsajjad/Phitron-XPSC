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
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            int time, data;
            cin >> time >> data;

            if (k == 0)
                ans += (time * data);
            else if (k > time)
                k -= time;
            else
            {
                int diff = abs(k - time);
                k = 0;
                ans += diff * data;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}