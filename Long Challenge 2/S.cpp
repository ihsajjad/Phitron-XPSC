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
        map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp1[c]++;
        }
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp2[c]++;
        }

        int mx_len = 0;
        for (auto it = mp1.begin(); it != mp1.end(); it++)
            for (auto it1 = mp2.begin(); it1 != mp2.end(); it1++)
                if (it->first == it1->first)
                    mx_len = max(mx_len, min(it->second, it1->second));

        cout << mx_len << '\n';
    }

    return 0;
}