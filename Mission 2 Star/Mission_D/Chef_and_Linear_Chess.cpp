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

        vector<int> arr(n), divisors_of_k;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 1; i * i <= k; i++)
            if (k % i == 0)
            {
                divisors_of_k.push_back(i);
                divisors_of_k.push_back(k / i);
            }

        sort(arr.begin(), arr.end());
        sort(divisors_of_k.begin(), divisors_of_k.end());
        int ans = -1;
        for (int itm : divisors_of_k)
        {
            int l = 0, r = n - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (arr[mid] > itm)
                    r = mid - 1;
                else if (arr[mid] < itm)
                    l = mid + 1;
                else
                {
                    ans = arr[mid];
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}