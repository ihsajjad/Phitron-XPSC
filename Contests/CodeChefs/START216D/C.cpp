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

        int mn = INT_MAX;

        for (int i = 0, j = 1; j < n; i++, j++)
            mn = min(mn, (arr[i] + arr[j]));

        cout << mn << '\n';
    }

    return 0;
}