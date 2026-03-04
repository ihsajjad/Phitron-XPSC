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
        int n;
        cin >> n;
        if (n <= 2)
        {
            cout << 0 << endl;
            continue;
        }
        
        n -= 2;
        int even = n / 2;
        int odd = n - even;
        long long ans = (odd * 2) + even;
        cout << ans << endl;
    }

    return 0;
}