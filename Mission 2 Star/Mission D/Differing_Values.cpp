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
        int n, k;
        cin >> n >> k;
        int t0 = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '0')
                t0++;
        }

        int min0 = 0;
        int max0 = 0;
        for (int i = 1; i <= k; i++)
        {
            int len = 0;
            for (int j = i; j <= n; j += k)
                len++;

            min0 += len / 2;
            max0 += (len + 1) / 2;
        }

        if (t0 >= min0 && t0 <= max0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}