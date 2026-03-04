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
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp[c]++;
        }

        bool flag = false;
        for (auto itm : mp)
        {
            if (itm.second >= 2)
                flag = true;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}