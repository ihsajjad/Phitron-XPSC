#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if ((a > b) && (b > c))
            cout << (a | b | c) << endl;
        else if ((a < b) && (b < c))
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}