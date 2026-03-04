#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ml.insert(-val);
    }

    int ans = 0;
    while (!ml.empty())
    {
        auto a = ml.begin();
        int x = k - (-*a);
        auto b = ml.lower_bound(-x);
        if (a == b)
            b++;

        if (a != ml.end() && b != ml.end() && ((-*a) + (-*b)) <= k)
        {
            ans++;
            ml.erase(a), ml.erase(b);
        }
        else if (a != ml.end())
        {
            ans++;
            ml.erase(a);
        }
    }

    cout << ans << endl;

    return 0;
}