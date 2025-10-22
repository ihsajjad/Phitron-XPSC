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

        vector<int> arr1(n), arr2(n);

        for (int i = 0; i < n; i++)
            cin >> arr1[i];

        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a = arr1[i];
            int b = arr2[i];

            if ((a / 2 <= b) && (b / 2 <= a))
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}