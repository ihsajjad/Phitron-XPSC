#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, s;
    cin >> n >> s;
    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0, mn = INT_MAX;
    long long int sum = 0;

    while (r < n)
    {
        sum += v[r];
        if (sum >= s)
        {
            mn = min(mn, r - l + 1);
            while (l <= r)
            {
                if (sum < s)
                    break;
                else
                    mn = min(mn, r - l + 1);

                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;

    return 0;
}