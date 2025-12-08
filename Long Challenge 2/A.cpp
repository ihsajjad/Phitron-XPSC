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
        int turn, a, b;
        cin >> turn >> a >> b;
        int total_time = 2 * (180 + turn);
        int rem = a + b;
        cout << total_time - rem << '\n';
    }

    return 0;
}