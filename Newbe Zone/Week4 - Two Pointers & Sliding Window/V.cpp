#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n, x, cnt = 0, sum = 0;
    cin >> n >> x;
    map<long long int, long long int> mp;
    mp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        long long int val;
        cin >> val;
        sum += val;
        cnt += mp[sum - x];
        mp[sum]++;
    }

    cout << cnt << '\n';
    return 0;
}