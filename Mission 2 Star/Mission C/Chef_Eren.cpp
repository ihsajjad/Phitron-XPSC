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
        int n, a, b;
        cin >> n >> a >> b;
        int ans;
        if (n % 2)
            ans = (((n / 2) + 1) * b) + ((n / 2) * a);
        else
            ans = ((n / 2) * a) + ((n / 2) * b);

        cout << ans << endl;
    }

    return 0;
}