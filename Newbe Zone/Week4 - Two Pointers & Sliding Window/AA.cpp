#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 2, 0), change(n + 2, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        change[l]++, change[r + 1]--;
    }

    int c = 0, mn = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        c += change[i], arr[i] += c;
        mn = min(mn, arr[i]);
    }
    cout << mn << '\n';
    return 0;
}