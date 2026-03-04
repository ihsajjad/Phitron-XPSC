#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int mx = INT_MIN;

    for (int i = 0, j = n - 1; i < j;)
    {
        int val = v[i] + v[j];

        mx = max(mx, val);
        i++;
    }

    cout << mx << endl;

    return 0;
}