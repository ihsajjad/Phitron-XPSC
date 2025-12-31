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
        int x;
        cin >> x;
        if (x % 2)
            cout << 1 << " " << (x - 1) / 2 << " " << (x - 1) / 2 << endl;
        else
            cout << 1 << " " << 1 << " " << x - 2 << endl;
    }

    return 0;
}