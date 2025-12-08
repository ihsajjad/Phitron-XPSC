#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    v.push_back(0);
    ll i = 1, lim = floor(sqrt(static_cast<double>(n)));

    while (i <= lim)
    {
        ll a = n / i;
        if (n % i == 0)
        {
            v.push_back(i);
            if (i != a)
                v.push_back(a);
        }
        i++;
    }

    sort(v.begin(), v.end());
    cout << (v.size() > k ? v[k] : -1) << endl;

    return 0;
}