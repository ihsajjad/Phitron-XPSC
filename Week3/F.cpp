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
        int n;
        cin >> n;

        set<int> st;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
            st.insert(val);
        }

        int l = 1, r = n;
        for (int i = 1, j = n; i <= n; i++, j--)
        {
            if (l >= r)
                break;

            auto it_mx = st.begin();
            auto it_mn = st.rbegin();

            if (it_mx != st.end())
            {
                int mx = *it_mx;
                if (v[r] == mx)
                {
                    r--;
                    st.erase(it_mx);
                }
                else if (v[l] == mx)
                {
                    l++;
                    st.erase(it_mx);
                }
            }

            if (it_mn != st.rend())
            {
                int mn = *it_mn;
                if (v[r] == mn)
                {
                    r--;
                    st.erase(--st.end());
                }
                else if (v[l] == mn)
                {
                    l++;
                    st.erase(--st.end());
                }
            }
        }

        if (l >= r)
            cout << "-1" << '\n';
        else
            cout << l << " " << r << endl;
    }

    return 0;
}