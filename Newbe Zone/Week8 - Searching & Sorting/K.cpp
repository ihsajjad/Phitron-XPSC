#include <bits/stdc++.h>
using namespace std;

// Solution 1: Manula Solution

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, l, r;
//         cin >> n >> l >> r;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++)
//             cin >> arr[i];

//         sort(arr.begin(), arr.end());
//         long long a = 0, b = 0, cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             long long j = i, k = n - 1, mid;
//             cnt = 0;
//             int x = r - arr[i];
//             while (j <= k)
//             {
//                 mid = (j + k) / 2;
//                 if (x >= arr[mid])
//                 {
//                     cnt = max(cnt, mid - i);
//                     j = mid + 1;
//                 }
//                 else
//                     k = mid - 1;
//             }
//             a += cnt;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             long long j = i, k = n - 1, mid;
//             cnt = 0;
//             int x = l - arr[i];
//             while (j <= k)
//             {
//                 mid = (j + k) / 2;
//                 if (x > arr[mid])
//                 {
//                     cnt = max(cnt, mid - i);
//                     j = mid + 1;
//                 }
//                 else
//                     k = mid - 1;
//             }

//             b += cnt;
//         }
//         cout << (a - b) << endl;
//     }

//     return 0;
// }

// Solution 2: Built-in Solution
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += upper_bound(arr.begin(), arr.end(), r - arr[i]) - arr.begin();
            ans -= lower_bound(arr.begin(), arr.end(), l - arr[i]) - arr.begin();
            if (l <= 2 * arr[i] && 2 * arr[i] >= r)
                ans--;
        }

        cout << (ans / 2) << endl;
    }

    return 0;
}