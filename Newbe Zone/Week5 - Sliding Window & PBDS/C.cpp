#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int l = 0, r = 0;
    long long ans = 0;
    multiset<long long> ml;
    while (r < n)
    {
        ml.insert(arr[r]);
        long long mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
            ans += (r - l + 1);
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k)
                    break;
                ml.erase(ml.find(arr[l]));
                l++;
            }
            if (mx - mn <= k)
                ans += r - l + 1;
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}