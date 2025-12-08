#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, s;
    cin >> n >> s;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
        cin >> v[i];

    long long int sum = 0, l = 0, r = 0, cnt = 0;
    map<int, bool> mp;
    while (r < n)
    {
        sum += v[r];

        if (sum > s)
        {
            while (sum > s)
            {
                sum -= v[l];
                l++;
            }
            cnt += r - l + 1;
        }
        else
            cnt += r - l + 1;

        r++;
    }

    cout << cnt << endl;

    return 0;
}