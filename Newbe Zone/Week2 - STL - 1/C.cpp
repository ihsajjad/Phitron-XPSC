#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<pair<string, string>, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        mp[{a, b}] = true;
    }

    cout << mp.size() << '\n';

    return 0;
}

// My solution and the time complexity is O(N*N);

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     vector<pair<string, string>> v;

//     for (int i = 0; i < n; i++)
//     {
//         string leaf, color;
//         cin >> leaf >> color;

//         bool isTaken = false;

//         for (int i = 0; i < v.size(); i++)
//             if (v[i].first == leaf && v[i].second == color)
//             {
//                 isTaken = true;
//                 break;
//             }

//         if (!isTaken)
//             v.push_back({leaf, color});
//     }

//     cout << v.size() << '\n';

//     return 0;
// }