
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    int s = 0, d = 0, who = 1;

    while (!dq.empty())
    {
        int left = dq.front(), right = dq.back(), mx = INT_MIN;
        mx = max(left, right);

        if (who % 2)
            s += mx;
        else
            d += mx;

        if (left == mx)
            dq.pop_front();
        else
            dq.pop_back();

        who++;
    }

    cout << s << " " << d << '\n';

    return 0;
}

// My Solution and the time complexity is O(N);
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];

//     int sereja = 0, dima = 0;
//     int l_idx = 0, r_idx = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         // dima's turn
//         if (i % 2)
//         {
//             if (v[l_idx] < v[r_idx])
//             {
//                 dima += v[r_idx];
//                 r_idx--;
//             }
//             else
//             {
//                 dima += v[l_idx];
//                 l_idx++;
//             }
//         }
//         // sereja's turn
//         else
//         {
//             if (v[l_idx] < v[r_idx])
//             {
//                 sereja += v[r_idx];
//                 r_idx--;
//             }
//             else
//             {
//                 sereja += v[l_idx];
//                 l_idx++;
//             }
//         }
//     }

//     cout << sereja << " " << dima << '\n';

//     return 0;
// }