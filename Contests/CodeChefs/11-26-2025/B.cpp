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
        int x, y, z;
        cin >> x >> y >> z;
        int pos1 = x - z, pos2 = x + z;
        int range = abs(pos1 - pos2);

        if (range > 2 * y)
            cout << 2 * y << endl;
        else
            cout << range << endl;
    }

    return 0;
}