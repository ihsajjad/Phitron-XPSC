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
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int min_t = n * min(a, b), max_t = n * max(a, b);
        bool flag = false;

        if (min_t > m || max_t < m)
            flag = false;

        for (int i = 0; i <= n; i++)
        {
            if (m == min_t)
            {
                flag = true;
                break;
            }

            min_t += n == i ? max(a, b) : max(a, b) - min(a, b);
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}