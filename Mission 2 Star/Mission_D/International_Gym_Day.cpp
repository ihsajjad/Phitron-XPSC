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
        int d, x, b;
        cin >> d >> x >> b;

        int ans = 0;
        while (x > b && b)
        {
            b--;
            x = (x * (100 - d)) / 100;
            ans++;
        }

        cout << (x <= b ? ans : -1) << endl;
    }

    return 0;
}