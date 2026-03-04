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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int r = 0, cnt = 0;
        long long sum = 0;
        bool is_counted = false;

        for (int i = 0; i < n; i++)
        {
            int val = v[i];

            if (val < 0)
            {
                sum += -val;
                if (!is_counted)
                {
                    cnt++;
                    is_counted = true;
                }
            }
            else if (val > 0)
            {
                sum += val;
                is_counted = false;
            }
        }

        cout << sum << " " << cnt << '\n';
    }

    return 0;
}