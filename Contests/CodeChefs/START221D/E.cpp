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
        int l, w;
        vector<int> v(3);
        set<int> st;
        cin >> l >> w >> v[0] >> v[1] >> v[2];
        st.insert(v[0]);
        st.insert(v[1]);
        st.insert(v[2]);

        int ans = 4;

        sort(v.begin(), v.end());
        if (v[0] == v[1] && v[1] == v[2])
        {
            ans = 6;
            continue;
        }

        int sum = v[0] + v[1];
        if (sum < min(l, w))
            ans = 6;
        else
        {
            if (st.size() == 2 && (l == *st.begin() || l == *st.rbegin()) || (w == *st.begin() || w == *st.rbegin()))
            {
                ans = 4;
            }
            else
                ans = 5;
        }

        cout << ans << endl;
    }

    return 0;
}