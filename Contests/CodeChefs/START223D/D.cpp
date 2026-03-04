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
        int ans = 0;

        bool has1 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 1)
            {
                ans++;
                has1 = true;
            }
            else if (i > 0 && arr[i - 1] == arr[i] - 1)
            {
                ans++;
            }
        }

        if (!has1 && ans > 0)
            ans++;
        cout << ans << endl;
    }

    return 0;
}