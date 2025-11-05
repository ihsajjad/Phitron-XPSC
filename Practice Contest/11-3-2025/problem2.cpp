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
        float h, x, y;
        cin >> h >> x >> y;

        h -= y;
        int rem = ceil(h / x);
        cout << (rem + 1) << endl;
    }

    return 0;
}