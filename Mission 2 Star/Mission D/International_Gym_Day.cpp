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
        int tmp = x;
        int ans = 0;
        bool flag = false;
        for (int i = 1; i <= y; i++)
        {
            if (x <= y)
            {
                ans = i - 1;
                flag = true;
                break;
            }
            x = i + tmp * ((100 - (i * d)) / 100);
        }

        cout << (flag ? ans : -1) << endl;
    }

    return 0;
}