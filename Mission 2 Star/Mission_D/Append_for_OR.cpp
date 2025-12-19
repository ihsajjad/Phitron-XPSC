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
        int n, y;
        cin >> n >> y;
        int or_n = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            or_n |= val;
        }

        int diff = y - or_n;

        if ((or_n | diff) == y)
            cout << diff << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}