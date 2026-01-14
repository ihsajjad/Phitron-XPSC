#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    vector<pair<string, int>> arr;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        auto it = mp.find(s);
        if (it != mp.end())
            mp.erase(it);
        mp[s] = i;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
        arr.push_back({it->first, it->second});

    sort(arr.begin(), arr.end(), cmp);
    string s;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        s.push_back(it->first[it->first.size() - 2]);
        s.push_back(it->first.back());
    }
    cout << s << endl;
    return 0;
}