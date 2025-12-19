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
        cin >> n;
        long long mul = 1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mul *= val;
        }

        cout << ((mul % 2) ? "YES" : "NO") << '\n';
    }

    return 0;
}