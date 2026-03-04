#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n >> x >> y;

    cout << ((n >= 2 * x && n >= 2 * y) ? "YES" : "NO") << endl;

    return 0;
}