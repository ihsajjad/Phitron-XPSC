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
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {

            if (a[i] == '1' && i > 0)
            {
                if (b[i - 1] == '0')
                    swap(a[i], b[i - 1]);
                else if (b[i - 1] == '1' && i - 2 >= 0)
                {
                    swap(a[i - 2], b[i - 1]);
                    i = i - 3;
                }
            }
            else if (i + 1 < n && b[i + 1] == '0')
            {
                swap(a[i], b[i + 1]);
            }
        }

        bool flag = true;
        for (char c : a)
            if (c == '1')
            {
                flag = false;
                break;
            }

        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}