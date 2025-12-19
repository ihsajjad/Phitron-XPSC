#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> mp;
    while (n--)
    {
        string old_handler, new_handler;
        cin >> old_handler >> new_handler;

        if (mp.find(old_handler) == mp.end())
            mp[new_handler] = old_handler;
        else
        {
            mp[new_handler] = mp[old_handler];
            mp.erase(old_handler);
        }
    }

    cout << mp.size() << '\n';
    for (auto child : mp)
        cout << child.second << " " << child.first << '\n';

    return 0;
}