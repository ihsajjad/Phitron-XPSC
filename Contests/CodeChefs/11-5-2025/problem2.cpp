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
        int w, p, k;
        cin >> w >> p >> k;

        int sum = 0;
        int diff = w - k;
        if (diff < 0)
        {
            sum += w * 2;
            sum += -diff;
        }
        else
            sum += k * 2;

        cout << sum << '\n';
    }

    return 0;
}