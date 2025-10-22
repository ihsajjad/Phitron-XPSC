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
        long long int count = 0;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }

        priority_queue<pair<int, string>> pq;

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            pq.push({it->second, it->first});
            cout << it->first << " " << it->second << '\n';
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }

            auto str1 = pq.top();
            pq.pop();
            auto str2 = pq.top();
            pq.pop();

            if (str1.second[0] != str2.second[0] && str1.second[1] != str2.second[1])
                continue;

            long long int sum = 0;
            for (int i = 0; i < max(str1.first, str2.first); i++)
            {
                sum += str1.first * str2.first;
            }
            count += sum;

            cout << str1.second << " " << str2.second << " " << sum << '\n';
        }

        // vector<string> v(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> v[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i; j < n; j++)
        //     {
        //         char a = v[i][0], b = v[i][1], c = v[j][0], d = v[j][1];
        //         if (v[i] != v[j])
        //         {
        //             if (a == c || b == d)
        //             {
        //                 cout << v[i] << " " << v[j] << '\n';
        //                 count++;
        //             }
        //         }
        //     }
        // }

        cout << count << '\n';
    }

    return 0;
}