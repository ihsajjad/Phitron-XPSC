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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int mx = 0;
        sort(arr.begin(), arr.end());
        for (int i = 1; i <= 100; i++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                int sum = arr[l] + arr[r];
                if (sum < i)
                    l++;
                else if (sum > i)
                    r--;
                else
                    cnt++, l++, r--;
            }
            mx = max(mx, cnt);
        }
        cout << mx << endl;
    }

    return 0;
}