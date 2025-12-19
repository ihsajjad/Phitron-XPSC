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
        int n, k;
        cin >> n >> k;
        if (n % 2)
        {
            int div = n / 2;
            cout << ((div == k || div + 1 == k) ? "YES" : "NO") << endl;
        }
        else
        {
            cout << ((n / 2) == k ? "YES" : "NO") << endl;
        }
    }

    return 0;
}