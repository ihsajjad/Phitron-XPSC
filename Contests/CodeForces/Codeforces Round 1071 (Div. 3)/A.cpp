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
        int k, x;
        cin >> x >> k;
        cout << ((k * x) + 1) << endl;
    }

    return 0;
}