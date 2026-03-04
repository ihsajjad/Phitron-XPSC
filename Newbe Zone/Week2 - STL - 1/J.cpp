#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, bool> mp;

    while (n--)
    {
        string s;
        cin >> s;

        if (mp[s])
            cout << "YES" << '\n';
        else
        {
            mp[s] = true;
            cout << "NO" << '\n';
        }
    }

    return 0;
}