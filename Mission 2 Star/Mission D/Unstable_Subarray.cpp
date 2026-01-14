#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        n = (n * (n - 1)) / 2;
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                ll remove = it.second;
                remove = (remove * (remove - 1)) / 2;
                n -= remove;
            }
        }
        cout << n << endl;
    }

    return 0;
}