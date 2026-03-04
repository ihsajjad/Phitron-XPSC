#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n), inv(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll ans = 0;
    pbds<ll> p;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (i == (n - 1))
            p.insert(arr[i]);
        else
        {
            inv[i] = p.order_of_key(arr[i]);
            p.insert(arr[i]);
        }
    }
    p.clear();

    for (ll j = 0; j < n; j++)
    {
        if (j == 0)
            p.insert(arr[j]);
        else
        {
            ll less_val = p.order_of_key(arr[j]);
            ll big_val = p.size() - less_val;
            ans += inv[j] * big_val;
            p.insert(arr[j]);
        }
    }
    cout << ans << '\n';
    return 0;
}