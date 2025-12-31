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
        int x1 = 1, ans1 = 0;
        int x2 = 0, ans2 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            arr[i] = s[i] == '0' ? 0 : 1;
            if (x1)
                ans1++;
            if (x2)
                ans2++;
            x1 = x1 ^ arr[i];
            x2 = x2 ^ arr[i];
        }
        cout << max(ans1, ans2) << endl;
    }
    return 0;
}