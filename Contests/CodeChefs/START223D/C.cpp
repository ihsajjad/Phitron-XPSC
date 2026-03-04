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
        int n, x, k;
        cin >> n >> x >> k;

        if (x % k == 0)
            cout << 0 << endl;
        else if ((n / k) * k < x)
        {
            cout << (x - ((n / k) * k)) << endl;
        }
        else
            cout << min(x % k, k - (x % k)) << endl;
    }

    return 0;
}