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

        if (n <= 2)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == n - 1)
                    cout << 1 << " ";
                else if (j == n - 2 && i <= 2)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}