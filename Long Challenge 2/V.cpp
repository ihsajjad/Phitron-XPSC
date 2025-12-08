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
        map<int, int> mp;
        for (int i = 0; i < 4; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }
        int len = mp.size();
        if (len == 1)
            cout << 0 << '\n';
        else if (len == 2)
        {
            if (mp.begin()->second == 2 && (--mp.end())->second == 2)
                cout << 2 << '\n';
            else
                cout << 1 << '\n';
        }
        else
            cout << 2 << '\n';
    }
    return 0;
}