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
        long long int n;
        cin >> n;
        string s, b;
        cin >> s;

        map<char, char> mp, mp2;
        for (long long int i = 0; i < n; i++)
            if (mp.find(s[i]) == mp.end())
                mp.insert({s[i], s[i]});

        auto it = mp.rbegin();
        for (auto it1 = mp.begin(); it1 != mp.end(); it1++, it++)
        {
            mp[it1->first] = it->first;
            mp[it->first] = it1->first;
        }

        // decoding
        for (long long int i = 0; i < n; i++)
            b.push_back(mp[s[i]]);

        cout << b << '\n';
    }

    return 0;
}