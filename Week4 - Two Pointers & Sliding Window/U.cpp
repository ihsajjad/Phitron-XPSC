#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long int> pre_fx(n);
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        pre_fx[i] = pre_fx[i - 1] + val;
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (pre_fx[r] - pre_fx[l - 1]) << '\n';
    }

    return 0;
}