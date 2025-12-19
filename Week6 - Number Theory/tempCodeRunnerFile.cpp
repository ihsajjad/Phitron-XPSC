#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        int n;
        cin >> n;
        ll x = -1, y = -1, tmp, mul = 1;
        if (n < 3)
        {
            cout << 6 << '\n';
            continue;
        }

        if (n % 2 == 0)
            tmp = n + 1;
        else
            tmp = n;

        while (1)
        {
            if (x != -1)
                mul = x * tmp;

            if (is_prime(tmp) && x == -1)
                x = tmp;
            else if (is_prime(tmp) && y == -1 && mul != n * n)
            {
                y = tmp;
                break;
            }
            tmp += 2;
        }

        cout << 1LL * x * y << endl;
    }

    return 0;
}