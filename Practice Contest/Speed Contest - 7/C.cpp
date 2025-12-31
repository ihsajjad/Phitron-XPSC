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
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        cout << (mp.size() >= 2 ? 2 : -1) << endl;
    }

    return 0;
}