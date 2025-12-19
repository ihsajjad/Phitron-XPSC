#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    vector<int> budgets(m);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        tickets.insert(-val);
    }

    for (int i = 0; i < m; i++)
        cin >> budgets[i];

    for (int i = 0; i < m; i++)
    {
        int val = budgets[i];
        auto it = tickets.lower_bound(-val);
        if (it != tickets.end())
        {
            cout << -*it << endl;
            tickets.erase(it);
        }
        else
            cout << -1 << '\n';
    }

    return 0;
}