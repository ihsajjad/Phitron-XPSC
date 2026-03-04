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

        int val = 0;
        for (int i = 0; i < n; ++i)
            val ^= arr[i];

        int mn = val;
        for (int i = 0; i < n; ++i)
        {
            int tmp = val ^ arr[i];
            mn = min(mn, tmp);
        }
        cout << mn << endl;
    }

    return 0;
}