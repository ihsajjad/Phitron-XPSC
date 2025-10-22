#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int i = 0, total_meter = 0;
    while (x >= 1)
    {
        if (x >= a)
        {

            total_meter += s * a;
            x -= (a + b);
        }
        else if (x >= 1)
        {
            total_meter += s * x;
            x = 0;
        }
    }

    cout << total_meter << '\n';

    return 0;
}