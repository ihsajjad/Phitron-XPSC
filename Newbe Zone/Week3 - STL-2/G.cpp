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
        long long int n;
        cin >> n;
        vector<int> arr(n);
        for (long long int i = 0; i < n; i++)
            cin >> arr[i];

        int total_str;
        cin >> total_str;
        while (total_str--)
        {
            string s;
            cin >> s;

            if (n != s.size())
            {
                cout << "NO" << '\n';
                continue;
            }

            map<char, int> mp;
            map<int, bool> counted;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                int val = arr[i];
                char c = s[i];

                auto it = mp.find(c);
                if (it != mp.end())
                {
                    if (val != it->second)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (counted[val])
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        mp.insert({c, val});
                        counted[val] = true;
                    }
                }
            }

            if (flag)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}