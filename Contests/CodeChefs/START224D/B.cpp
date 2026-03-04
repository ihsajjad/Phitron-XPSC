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

        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
            else
                cnt++;
        }
        ans = max(ans, cnt);
        cout << ans << endl;
    }

    return 0;
}