#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    ll n = (r - l + 1) / 2;
    ll i = l, j = l + 1;

    cout << "YES" << '\n';
    while (n--)
    {
        cout << i << " " << j << endl;
        i += 2, j += 2;
    }

    return 0;
}