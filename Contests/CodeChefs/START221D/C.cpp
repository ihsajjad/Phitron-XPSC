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
        string s;
        cin >> s;
        if (n <= 2)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = true;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            mp[c]++;
            if (mp[c] >= 3)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}