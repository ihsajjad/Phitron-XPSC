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
        int n, odd = 0, even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 1)
                odd++;
            else
                even++;
        }

        if ((n % 2 && odd % 2 == 0) || n % 2 == 0 && odd % 2)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}