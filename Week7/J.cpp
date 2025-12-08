#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

ll myPow(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll ans = myPow(a, b / 2);

    if (b % 2 == 0)
        return (ans * ans) % MOD;
    else
        return (a * ans * ans) % MOD;
}

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
        long long ans = myPow(2, n - 1) % MOD;
        cout << (ans) << '\n';
    }

    return 0;
}