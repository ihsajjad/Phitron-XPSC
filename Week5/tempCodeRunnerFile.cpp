#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n), inv(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long ans = 0;
    pbds<int> p;
    for (int i = n - 1; i >= 0; i--)
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

    for (int j = 0; j < n; j++)
    {
        if (j == 0)
            p.insert(arr[j]);
        else
        {
            int less_val = p.order_of_key(arr[j]);
            int big_val = p.size() - less_val;
            ans += inv[j] * big_val;
            p.insert(arr[j]);
        }
    }
    cout << ans << '\n';
    return 0;
}