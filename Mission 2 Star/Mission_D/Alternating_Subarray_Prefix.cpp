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

        int l = 1, r = 0, cnt = 1;
        while (l <= n)
        {
            int next = r == n - 1 ? arr[r] : arr[r + 1];
            if (arr[r] * next < 0)
                cnt++;
            else
            {
                cout << cnt << " ";
                // cnt--;
                // if (!cnt)
                    cnt-=l;
                l++;
            }

            if (r < n - 1)
                r++;
        }
        cout << endl;
    }

    return 0;
}