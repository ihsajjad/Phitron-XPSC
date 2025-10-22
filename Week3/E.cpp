#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int order = 1;
    set<pair<int, int>> st;
    multiset<pair<int, int>> ml;

    while (t--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int m;
            cin >> m;
            st.insert({order, m});
            ml.insert({m, -order});
            order++;
        }
        else
        {
            if (q == 2)
            {
                int pos = st.begin()->first, money = st.begin()->second;
                cout << pos << " ";
                st.erase(st.begin());
                ml.erase({money, -pos});
            }
            else
            {
                int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
                cout << pos << " ";
                st.erase({pos, money});
                ml.erase(--ml.end());
            }
        }
    }

    return 0;
}