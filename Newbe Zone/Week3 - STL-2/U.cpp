#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        else if (cmd == 1)
        {
            cout << *st.begin() << '\n';
            st.erase(st.begin());
        }
        else
        {
            cout << *st.rbegin() << '\n';
            st.erase(--st.end());
        }
    }

    return 0;
}