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
        map<int, int> mp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;

            if (mp[v[i]] == 1)
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}