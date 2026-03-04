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
        vector<ll> arr(n), gcds(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        ll g = 0, mn = arr[0];

        for (int i = 1; i < n; i++)
            if (arr[i] % mn == 0)
                g = __gcd(arr[i], g);

        cout << (mn == g ? "YES" : "NO") << '\n';
    }

    return 0;
}