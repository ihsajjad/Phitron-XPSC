#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll divisible_by_a = floor(n / a);
    ll divisible_by_b = floor(n / b);
    ll divisible_by_both = floor(n / ((a * b) / __gcd(a, b)));

    if (a == b)
    {
        cout << (divisible_by_a * max(p, q)) << '\n';
        return 0;
    }

    if (p < q)
        divisible_by_a -= divisible_by_both;
    else if (p > q)
        divisible_by_b -= divisible_by_both;
    else
    {
        if (a > b)
            divisible_by_a -= divisible_by_both;
        else
            divisible_by_b -= divisible_by_both;
    }

    ll ans = (divisible_by_a * p) + (divisible_by_b * q);
    cout << ans << endl;
    return 0;
}