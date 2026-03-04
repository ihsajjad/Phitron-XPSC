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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (st.find(val) != st.end())
            {
                ans += 2;
                st.clear();
            }
            else
                st.insert(val);
        }
        cout << ans << endl;
    }

    return 0;
}