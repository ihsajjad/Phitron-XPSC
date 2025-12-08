#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> freq(200001, 0), change(200001, 0), pre_fx(200001, 0);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        change[l]++;
        change[r + 1]--;
    }

    int val = 0;
    for (int i = 1; i < 200001; i++)
    {
        val += change[i];
        freq[i] += val;
        if (freq[i] >= k)
            pre_fx[i]++;
        pre_fx[i] = pre_fx[i - 1] + pre_fx[i];
    }

    int cnt = 0;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (pre_fx[r] - pre_fx[l - 1]) << endl;
    }

    return 0;
}