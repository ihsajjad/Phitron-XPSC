#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double ans = 0;
    while (n--)
    {
        double x, y;
        cin >> x >> y;
        ans += x * y;
    }

    cout << ans << endl;

    return 0;
}