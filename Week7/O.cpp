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
        int mx_on_bit = (1 << __lg(n));
        cout << max((n % mx_on_bit) + 1, mx_on_bit / 2) << '\n';
    }
    return 0;
}