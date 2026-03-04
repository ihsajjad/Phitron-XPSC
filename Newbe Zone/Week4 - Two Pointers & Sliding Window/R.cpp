#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, x, cnt = 0;
    cin >> n >> x;
    vector<long long int> pre_fx(n + 1);
    set<long long int> st;
    st.insert(0);
    for (int i = 1; i <= n; i++)
    {
        long long int val;
        cin >> val;
        long long int sum = pre_fx[i - 1] + val;
        pre_fx[i] = sum;
        st.insert(sum);
        long long int diff = sum - x;
        if (st.count(diff))
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}