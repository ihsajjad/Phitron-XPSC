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
        long long int count = 0;

        map<string, long long int> mp;
        for (long long int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            for (auto it2 = it; it2 != mp.end(); it2++)
            {
                char a = it->first[0], b = it->first[1], c = it2->first[0], d = it2->first[1];
                if (it->first != it2->first)
                {
                    if (a == c || b == d)
                    {
                        long long int val = it->second * it2->second;
                        count += val;
                    }
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}