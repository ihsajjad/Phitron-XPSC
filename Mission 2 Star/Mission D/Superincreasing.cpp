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
        long long n, k, x;
        cin >> n >> k >> x;

        if (k > 32)
            cout << "No\n";
        else if (x >= (long long)1 << (k - 1))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}