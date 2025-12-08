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
        float n, k, l;
        cin >> n >> k >> l;
        vector<int> bowlers;

        if ((n / k) > l)
        {
            cout << -1 << '\n';
            continue;
        }

        for (int i = 1; i <= n; i++)
            bowlers.push_back(i);

        int i = 0, cnt = 1;
        while (cnt <= n)
        {
            cout << bowlers[i] << " ";
            if (i == k - 1)
                i = 0;
            else
                i++;
            cnt++;
        }
        cout << '\n';
    }

    return 0;
}