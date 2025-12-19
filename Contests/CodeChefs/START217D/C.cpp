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
        int n, m;
        cin >> n >> m;
        bool flag = false;
        int x = (m / 3) + (m % 3);
        if (n > x && n <= m)
            if ((n - x) % 2 == 0)
                flag = true;

        if (n == x || n == m)
            flag = true;

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}