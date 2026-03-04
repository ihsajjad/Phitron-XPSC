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
        int a, b, n;
        cin >> a >> b >> n;
        long long ans = -1;

        if (__gcd(a, b) == b)
            ans = -1;
        else
        {
            int i = n / a;
            while (true)
            {
                long long tmp = a * i;
                if (tmp % b && tmp >= n)
                {
                    ans = tmp;
                    break;
                }
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}