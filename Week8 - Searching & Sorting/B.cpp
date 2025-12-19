#include <bits/stdc++.h>
using namespace std;

// Problem Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

// Solution 1: SOLVED USING LOWER_BOND
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
//         mp[-val] = i;
//     }

//     for (int i = 0; i < k; i++)
//     {
//         int x;
//         cin >> x;
//         auto it = mp.lower_bound(-x);
//         cout << it->second << '\n';
//     }

//     return 0;
// }

// Solution 2: SOLVED USING BINARY_SEARCH

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
        int key, l = 0, r = n - 1, ans = -1, mid;
        cin >> key;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key >= arr[mid])
            {
                ans = max(ans, mid);
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << (ans + 1) << endl;
    }

    return 0;
}
