#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        mp[l]++;
        mp[r + 1]--;
    }

    long long sum = 0;
    bool flag = true;

    for (auto [key, val] : mp)
    {
        sum += val;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }

    cout << (flag ? "YES" : "NO") << '\n';

    return 0;
}