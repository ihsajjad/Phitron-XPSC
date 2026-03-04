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

        int count = 0;
        set<int> st;
        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(v[i]))
                break;

            st.insert({v[i]});
            count++;
        }

        cout << (n - count) << '\n';
    }

    return 0;
}