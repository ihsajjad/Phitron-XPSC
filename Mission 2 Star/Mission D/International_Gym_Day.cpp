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
        float d, x, y;
        cin >> d >> x >> y;
        int disc = round((x / 100) * d);

        if (x <= y)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = -1;
        for (int i = 1; i <= y; i++)
        {
            int discount = i * x * d / 100;
            if (x - discount <= y - i)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}