#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, int>> arr;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    sort(arr.begin(), arr.end(), cmp);
    int watchedMovies = 0, totalTime = 0;

    for (auto itm : arr)
    {
        if (itm.first >= totalTime)
        {
            watchedMovies++;
            totalTime = itm.second;
        }
    }

    cout << watchedMovies << endl;

    return 0;
}