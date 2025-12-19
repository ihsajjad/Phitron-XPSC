#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pbds<int> order;
    for (int i = 1; i <= n; i++)
        order.insert(i);

    int idx = 1 % n;
    while (n--)
    {
        auto it = order.find_by_order(idx);
        cout << *it << " ";
        order.erase(it);

        if (n)
            idx = (idx + 1) % n;
    }

    return 0;
}