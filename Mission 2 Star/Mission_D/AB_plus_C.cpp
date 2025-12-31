#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if (n <= 1)
            cout << -1 << endl;
        else if (n < 1e6)
        {
            cout << 1 << " " << 1 << " " << n - 1 << endl;
        }
        else if (n >= 1e6 && n % 1000000)
            cout << 1000000 << " " << (n / 1000000) << " " << (n % 1000000) << endl;
        else
            cout << 1000000 << " " << (n / 1000000 - 1) << " " << 1000000 << endl;
    }

    return 0;
}