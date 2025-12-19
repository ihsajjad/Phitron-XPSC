#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < n)
    {
        if (sum < x)
            sum += v[r];
        if (sum >= x)
        {
            while (sum >= x)
            {
                if (sum < x)
                    break;

                sum -= v[l];
                ans += n - r;
                l++;
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}