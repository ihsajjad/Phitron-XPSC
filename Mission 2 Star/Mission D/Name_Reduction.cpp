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
        string a, b, c;
        cin >> a >> b;
        int n;
        cin >> n;
        map<char, int> mp;
        for (char c : a)
            mp[c]++;
        for (char c : b)
            mp[c]++;

        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            c += x;
        }
        bool flag = true;
        for (char child : c)
        {
            mp[child]--;
            if (mp[child] < 0)
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}