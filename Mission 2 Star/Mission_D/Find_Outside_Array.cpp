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
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.insert(val);
        }

        if (*st.begin() < 0)
            cout << *st.begin() << " " << *st.begin() << endl;
        else if (*st.rbegin() > 0)
            cout << *st.rbegin() << " " << *st.rbegin() << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}