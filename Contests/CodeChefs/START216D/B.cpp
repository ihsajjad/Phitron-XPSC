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
        int x, y;
        cin >> x >> y;
        int alice = ((y - x) / 2) + x;
        int bob = y - alice;
        cout << alice << " " << bob << '\n';
    }

    return 0;
}