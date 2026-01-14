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
        int a, b, c;
        cin >> a >> b >> c;
        int ans1 = (b + c) - (b % 2 * c % 2);
        int ans2 = (c + a) - (c % 2 * a % 2);
        int ans3 = (a + b) - (a % 2 * b % 2);

        cout << min(ans1, min(ans2, ans3)) << endl;
    }

    return 0;
}