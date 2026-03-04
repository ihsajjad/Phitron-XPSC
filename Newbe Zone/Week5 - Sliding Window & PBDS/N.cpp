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

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    pbds<pair<int, int>> p;
    int l = 0, r = 0;
    while (r < n)
    {
        p.insert({arr[r], r});
        if (p.size() == k)
        {
            int mid = k / 2;
            if (k % 2 == 0)
                mid--;

            auto it = p.find_by_order(mid);
            cout << it->first << " ";
            p.erase(p.find({arr[l], l}));
            l++;
        }

        r++;
    }

    return 0;
}