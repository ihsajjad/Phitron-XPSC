#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<priority_queue<int>> v(n);
    while (q--)
    {
        int cmd, idx;
        cin >> cmd >> idx;
        if (cmd == 0)
        {
            int val;
            cin >> val;
            v[idx].push(val);
        }
        else if (cmd == 1)
        {
            if (v[idx].size())
                cout << v[idx].top() << '\n';
        }
        else
        {
            if (v[idx].size())
                v[idx].pop();
        }
    }

    return 0;
}