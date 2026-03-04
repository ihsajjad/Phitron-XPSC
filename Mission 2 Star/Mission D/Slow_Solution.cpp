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
        long long max_t, max_n, sum_n;
        cin >> max_t >> max_n >> sum_n;
        int tc = sum_n / max_n;
        int r = sum_n % max_n;
        if (tc < max_t)
            cout << (tc * max_n * max_n + r * r) << endl;
        else
            cout << (max_t * max_n * max_n) << endl;
    }

    return 0;
}