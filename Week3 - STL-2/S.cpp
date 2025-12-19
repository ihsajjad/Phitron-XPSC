#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    set<int> st;
    while (t--)
    {
        int cmd, val;
        cin >> cmd >> val;

        if (cmd == 1)
            st.insert(val);
        else if (cmd == 2)
        {
            auto it = st.find(val);
            if (it != st.end())
                st.erase(it);
             }
        else
        {
            auto it = st.find(val);
            if (it != st.end())
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }

    return 0;
}