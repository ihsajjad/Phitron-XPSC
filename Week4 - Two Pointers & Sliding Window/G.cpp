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
        int n;
        string s;
        cin >> n >> s;

        for (int i = 0, j = n - 1; s[i] != s[j] && i < j; i++, j--)
            n -= 2;

        cout << n << '\n';
    }

    return 0;
}