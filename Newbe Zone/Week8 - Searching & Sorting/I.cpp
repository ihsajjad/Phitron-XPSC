#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> arr(n), pre_sum(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    pre_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre_sum[i] = pre_sum[i - 1] + arr[i];

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(pre_sum.begin(), pre_sum.end(), x);
        cout << (it - pre_sum.begin() + 1) << '\n';
    }

    return 0;
}