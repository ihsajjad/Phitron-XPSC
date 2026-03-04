#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int mid = (n + 1) / 2;
        ll max_attack;
        int dist;

        if (n % 2)
        {
            max_attack = (n - 1) * 4;
            dist = max(abs(x - mid), abs(y - mid));
        }
        else
        {
            max_attack = (n - 1) * 4 - 1;
            if ((mid + 1 == x && x == y) || (mid == x && (mid + 1) == y) || (mid + 1 == x && mid == y) || (mid == x && mid == y))
            {
                dist = 0;
            }
            else
            {
                dist = max(abs(x - (x > mid ? mid + 1 : mid)), abs(y - (y > mid ? mid + 1 : mid)));
            }
        }

        cout << (max_attack - (dist * 2)) << '\n';
    }

    return 0;
}