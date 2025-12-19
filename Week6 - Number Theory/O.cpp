#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, x;
        cin >> a >> b;
        if (a % b)
            x = __gcd(a, b);
        else
            x = a;
        long long lcm = (a * x) / __gcd(a, x);
        cout << (lcm - __gcd(b, x)) << endl;
    }

    return 0;
}