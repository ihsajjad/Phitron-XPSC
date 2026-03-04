#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}

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
        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;

            if (c >= 65 && c <= 90)
                c += 32;

            mp[c]++;
        }

        vector<pair<char, int>> arr;
        for (auto child : mp)
            arr.push_back(child);

        sort(arr.begin(), arr.end(), cmp);

        cout << (arr[0].second + arr[1].second) << endl;
    }

    return 0;
}