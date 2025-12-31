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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int s1 = a1 - a2, s2 = b1 - b2;
        cout << ((s1 + s2) < 0 ? "YES" : "NO") << endl;
    }

    return 0;
}