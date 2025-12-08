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
        int n, x;
        cin >> n >> x;
        int small = 0, big = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val < x)
                small++;
            else
                big++;

            if (val == x)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else
        {
            if (small > big)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }

    return 0;
}