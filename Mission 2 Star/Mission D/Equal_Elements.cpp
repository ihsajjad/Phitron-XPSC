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
        map<int, int> mp;
        int mx_freq = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            mx_freq = max(mx_freq, mp[val]);
        }

        cout << (n - mx_freq) << endl;
    }

    return 0;
}