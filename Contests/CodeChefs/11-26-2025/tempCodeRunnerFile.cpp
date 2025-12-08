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
        vector<int> a(n), b(n);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] != b[i])
                flag = false;
        }

        if (flag)
        {
            cout << "YES" << endl;
            continue;
        }

        flag = true;

        for (int i = 0, j = 1; j < n; i++, j++)
        {
            if ((a[i] < a[j] && b[i] > b[j]) || (a[i] > a[j] && b[i] < b[j]))
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}