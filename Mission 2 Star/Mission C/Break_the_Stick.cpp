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
        int n, x;
        cin >> n >> x;

        if (n % 2)
            cout << (x % 2 ? "YES" : "NO") << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}