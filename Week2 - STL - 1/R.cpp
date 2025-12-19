#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    map<pair<int, int>, string> mp;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string name;
        cin >> name;
        mp[{a, b}] = name;
    }

    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        cout << mp[{a, b}] << '\n';
    }

    return 0;
}