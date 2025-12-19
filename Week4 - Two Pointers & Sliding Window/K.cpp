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
        vector<pair<char, int>> v(n);

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i].second = val;
        }
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            v[i].first = c;
        }

        int l = 0, r = 1, i = 0;
        long long ans = 0;
        int sum = 0;

        while (l < r && r < n)
        {

            if (v[i].first == 'L')
            {
                if (i != l)
                {
                    // ans += sum;
                    // sum = v[i].second;
                }
                sum += v[i].second;
                l = i;
            }
            else if (v[i].first == 'R')
            {
                sum += v[i].second;
                ans += sum;
                r = i;
            }

            i++;
        }

        cout << ans << endl;
    }

    return 0;
}