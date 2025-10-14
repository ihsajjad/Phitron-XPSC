#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int first_pos = s.find('B');
        int last_pos = s.rfind('B');

        int ans = last_pos - first_pos + 1;

        cout << ans << '\n';
    }

    return 0;
}

// My Solution

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int idx_l = -1, idx_r = n - 1;
//         vector<char> str(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> str[i];
//             if (str[i] == 'B')
//             {
//                 if (idx_l == -1)
//                     idx_l = i;

//                 idx_r = i;
//             }
//         }

//         if (idx_l == idx_r)
//         {
//             cout << 1 << '\n';
//             continue;
//         }
//         else
//             cout << (idx_r - (idx_l - 1)) << '\n';
//     }

//     return 0;
// }