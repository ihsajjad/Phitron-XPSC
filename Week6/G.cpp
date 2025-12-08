#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int a = 2, b = r;
        bool flag = false;
        while (a <= b)
        {
            long long sum = a + b;
            cout << a << " " << b << " " << sum << endl;
            if ((sum >= l && sum <= r) && __gcd(a, b) != 1)
            {
                flag = true;
                break;
            }

            b--;
        }

        // if (flag)
        //     cout << a << " " << b << '\n';
        // else
        //     cout << -1 << '\n';
    }

    return 0;
}