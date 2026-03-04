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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        set<int> st;
        set<int> segment;

        int count = 0;
        st.insert(v[0]);
        for (int i = 0; i < n; i++)
        {
            auto it = st.find(v[i]);
            if (it != st.end())
            {
                st.erase(it);
                segment.insert(v[i]);
            }
            else
                segment.insert(v[i]);

            if (st.empty())
            {
                count++;
                st = segment;
                segment.clear();
            }
        }

        cout << count << '\n';
    }

    return 0;
}