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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long GCD1 = 0, GCD2 = 0;
        for (int i = 0; i < n; i += 2)
            GCD1 = __gcd(GCD1, arr[i]);
        for (int i = 1; i < n; i += 2)
            GCD2 = __gcd(GCD2, arr[i]);

        long long ans = 0;
        bool ok = true;
        for (int i = 1; i < n; i += 2)
            if (arr[i] % GCD1 == 0)
                ok = false;

        if (ok)
            ans = GCD1;
        else
        {
            ok = true;
            for (int i = 0; i < n; i += 2)
                if (arr[i] % GCD2 == 0)
                    ok = false;
            if (ok)
                ans = GCD2;
        }
        cout << ans << '\n';
    }

    return 0;
}