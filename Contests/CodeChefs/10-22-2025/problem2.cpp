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

        long long int ev_sum = 0, od_sum = 0;
        for (int i = x; i <= y; i += x)
        {
            if (i % 2)
                od_sum += i;
            else
                ev_sum += i;
        }

        if (ev_sum >= od_sum)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}