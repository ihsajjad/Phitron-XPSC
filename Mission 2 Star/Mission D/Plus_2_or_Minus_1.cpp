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
        int y;
        cin >> y;
        if (y == 0)
            cout << 1 << endl;
        else
            cout << y * 3 << endl;
    }

    return 0;
}