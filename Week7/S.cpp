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
        vector<int> b(n - 1), a(n);
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];

        int prev = 0;
        for (int i = 0; i < n; i++)
            a[i] = ((i == 0 ? 0 : b[i - 1]) | (i == n - 1 ? 0 : b[i]));

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
            flag &= (a[i] & a[i + 1]) == b[i];

        if (flag)
            for (int itm : a)
                cout << itm << " ";
        else
            cout << -1;

        cout << endl;
    }

    return 0;
}