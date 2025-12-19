#include <bits/stdc++.h>
using namespace std;

int dp[11];

int fac(int n)
{
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    dp[n] = fac(n - 1) * n;
    return dp[n];
}

int main()
{
    int t;
    cin >> t;

    memset(dp, -1, sizeof(dp));

    while (t--)
    {
        int n;
        cin >> n;

        cout << (fac(n)%10) << endl;
    }

    return 0;
}