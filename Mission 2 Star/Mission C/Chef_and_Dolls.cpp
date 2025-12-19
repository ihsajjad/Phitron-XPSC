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

        sort(arr.begin(), arr.end());
        int ans = -1;
        for (int i = 0, j = 1; i < n; i += 2, j += 2)
        {
            if (arr[i] != arr[j])
            {
                ans = arr[i];
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}