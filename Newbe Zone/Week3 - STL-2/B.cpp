#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.insert(val);
    }

    int count = 0;
    for (auto it : st)
        if (it > count)
            count++;

    cout << count << '\n';

    return 0;
}