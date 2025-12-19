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
        long long int n;
        cin >> n;
        string s;
        cin >> s;

        long long int mx = INT_MIN;
        long long int mid = n / 2;

        // for (int i = 0, j = n - 1, cnt = 0; cnt < n; cnt++)
        // {
        //     if (i < mid)
        //     {
        //         if (s[i] == 'L')
        //             s[i] = 'R';

        //         long long int sum = 0;
        //         for (long long int j = 0; j < n; j++)
        //             if (s[j] == 'R')
        //                 sum += n - j - 1;
        //             else
        //                 sum += j;

        //         mx = max(mx, sum);
        //         i++;
        //     }
        //     else
        //     {
        //         if (s[j] == 'R')
        //             s[j] = 'L';

        //         long long int sum = 0;
        //         for (long long int j = 0; j < n; j++)
        //             if (s[j] == 'R')
        //                 sum += n - j - 1;
        //             else
        //                 sum += j;

        //         mx = max(mx, sum);

        //         j--;
        //     }

        //     cout << mx << " ";
        // }

        for (long long int i = 0, j = n - 1; i < n; i++, j--)
        {
            // if (i < mid && s[i] == 'L')
            //     s[i] = 'R';

            // if (j >= mid && s[j] == 'R')
            //     s[j] = 'L';

            long long int sum = 0;
            for (long long int j = 0; j < n; j++)
                if (s[j] == 'R')
                    sum += j;
                else
                    sum += n - j - 1;

            mx = max(mx, sum);
            cout << mx << " ";
        }

        cout << '\n';
    }

    return 0;
}