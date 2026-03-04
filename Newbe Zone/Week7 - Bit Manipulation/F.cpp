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

        int bits = __lg(n);
        int b = (1 << bits);
        cout << n - b << " " << b << endl;
    }

    return 0;
}