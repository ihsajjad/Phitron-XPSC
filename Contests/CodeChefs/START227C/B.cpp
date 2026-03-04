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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        multiset<int> st;
        for (int i = 0; i < n; i++)
            if (s[i] == '0')
                st.insert(arr[i]);

        int ans = 0;
        int i = k;
        for (auto it = st.begin(); it != st.end(); it++)
        {
            if (i <= 0)
                break;
            ans += *it;
            i--;
        }

        cout << ((st.size() < k) ? -1 : ans) << endl;
    }

    return 0;
}