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
        int n, m = 3;
        cin >> n;

        map<string, vector<int>> mp;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }

        vector<int> ans(m + 1);
        for (auto item : mp)
        {
            vector<int> v = item.second;
            if (v.size() == 1)
                ans[v[0]] += 3;
            else if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }

        for (int i = 1; i <= m; i++)
            cout << ans[i] << " ";

        cout << '\n';
    }

    return 0;
}

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

//         map<string, bool> person_a;
//         map<string, bool> person_b;
//         map<string, bool> person_c;

//         for (int i = 0; i < n; i++)
//         {
//             string word;
//             cin >> word;
//             person_a[word] = true;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string word;
//             cin >> word;
//             person_b[word] = true;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             string word;
//             cin >> word;
//             person_c[word] = true;
//         }

//         int val_a = 0, val_b = 0, val_c = 0;

//         for (auto child : person_a)
//         {
//             auto it_b = person_b.find(child.first);
//             auto it_c = person_c.find(child.first);

//             if (it_b == person_b.end() && it_c == person_c.end())
//                 val_a += 3;
//             else if (it_b != person_b.end() && it_c == person_c.end())
//                 val_a += 1;
//             else if (it_b == person_b.end() && it_c != person_c.end())
//                 val_a += 1;
//         }

//         for (auto child : person_b)
//         {
//             auto it_a = person_a.find(child.first);
//             auto it_c = person_c.find(child.first);
//             if (it_a == person_a.end() && it_c == person_c.end())
//                 val_b += 3;
//             else if (it_a != person_a.end() && it_c == person_c.end())
//                 val_b += 1;
//             else if (it_a == person_a.end() && it_c != person_c.end())
//                 val_b += 1;
//         }

//         for (auto child : person_c)
//         {
//             auto it_a = person_a.find(child.first);
//             auto it_b = person_b.find(child.first);
//             if (it_a == person_a.end() && it_b == person_b.end())
//                 val_c += 3;
//             else if (it_a != person_a.end() && it_b == person_b.end())
//                 val_c += 1;
//             else if (it_a == person_a.end() && it_b != person_b.end())
//                 val_c += 1;
//         }

//         cout << val_a << " " << val_b << " " << val_c << endl;
//     }

// return 0;
// }