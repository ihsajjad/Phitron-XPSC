#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    multiset<int> st;
    vector<int> v(m);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x = v[i];
        auto it = st.lower_bound(x - k);
        auto it2 = st.lower_bound(x);

        if (it != st.end())
        {
            if (*it >= x - k && *it <= x + k)
            {
                ans++;
                st.erase(it);
            }
        }
        else if (it2 != st.end())
        {
            if (*it2 >= x - k && *it2 <= x + k)
            {
                ans++;
                st.erase(it2);
            }
        }
    }

    cout << ans << endl;

    return 0;
}