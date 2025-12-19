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
        int l = 0, j = 1, ans = 0;
        while (j < n)
        {
            if (arr[l] > arr[j])
                ans++;
            else
                l = j;
            j++;
        }

        cout << ans << '\n';
    }

    return 0;
}