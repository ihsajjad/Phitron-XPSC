#include <bits/stdc++.h>
using namespace std;

// Solution 1 : Lower_Bond()

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     cin >> n >> k;
//     map<int, int> mp;
//     for (int i = 1; i <= n; i++)
//     {
//         int val;
//         cin >> val;
//         if (!mp[val])
//             mp[val] = i;
//     }

//     for (int i = 0; i < k; i++)
//     {
//         int x;
//         cin >> x;
//         auto it = mp.lower_bound(x);
//         cout << (it->second ? it->second : n + 1) << '\n';
//     }

//     return 0;
// }

// Solution 2: Binary_Search

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < q; i++)
    {
        int key, l = 0, r = n - 1, ans = n, mid;
        cin >> key;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key < arr[mid])
            {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << (ans + 1) << endl;
    }

    return 0;
}