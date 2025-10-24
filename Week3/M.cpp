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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        map<int, int> mp;
        for (int i = 0; i < n; i++)
            mp[v[i]]++;

        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int val = v[i];
            if (mp[v[i]] != 0)
            {
                count++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}