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
        int n, k;
        cin >> n >> k;
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s] = true;
        }
        string s;
        for (int i = 0; i < k; i++)
            s.push_back('0');
        bool ok = true;
        for (int i = 0; i < k; i++)
        {
            s[i] = '1';
            if (!mp[s])
            {
                ok = false;
                break;
            }
            s[i] = '0';
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}