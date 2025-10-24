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
        int x, y;
        cin >> x >> y;

        map<int, int> mp1;
        map<int, int> mp2;
        for (int i = 0; i < x; i++)
        {
            int val;
            cin >> val;
            mp1[val]++;
        }
        for (int i = 0; i < y; i++)
        {
            int val;
            cin >> val;
            mp2[val]++;
        }

        cout << mp1.begin()->first << " " << mp2.begin()->first << '\n';
    }

    return 0;
}