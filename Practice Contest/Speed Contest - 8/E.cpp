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
        int n, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % 2)
                odd++;
        }

        cout << (odd == 1 ? "Yes" : "No") << endl;
    }

    return 0;
}