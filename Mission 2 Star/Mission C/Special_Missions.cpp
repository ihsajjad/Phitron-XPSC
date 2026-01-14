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
        int n, cost;
        cin >> n >> cost;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        string s;
        cin >> s;

        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            if (c == '0')
                ans1 += arr[i];
            else
                ans2 += arr[i];
        }

        cout << ((ans1 >= cost) ? (max(ans1, ans1 + ans2 - cost)) : ans1) << endl;
    }
    return 0;
}