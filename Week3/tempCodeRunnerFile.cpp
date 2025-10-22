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
        multiset<int> st;

        for (int i = 1; i <= n; i++)
            st.insert(i);

        vector<pair<int, int>> v;

        while (!st.empty())
        {
            if (st.size() < 2)
                break;
            int a = *st.rbegin();
            int b = *--st.rbegin();
            if (a % 2 == 0 && b % 2)
                b--;
            if (a % 2 && b % 2 == 0)
                b--;
            st.erase(a);
            st.erase(b);
            int div = (a + b) / 2;
            st.insert(div);
            v.push_back({a, b});
        }

        cout << *st.begin() << '\n';
        for (auto item : v)
            cout << item.first << " " << item.second << '\n';
    }

    return 0;
}