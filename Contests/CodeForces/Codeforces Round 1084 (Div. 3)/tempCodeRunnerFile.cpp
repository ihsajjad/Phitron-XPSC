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
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;

            if (!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }

        cout << (st.size() > 0 ? "NO" : "YES") << endl;
    }

    return 0;
}