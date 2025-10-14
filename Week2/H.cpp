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

        // if (n % 2)
        //     mid--;

        for (long long int i = 0; i < n; i++)
        {
            if (i < mid && s[i] == 'L')
            {
                s[i] = 'R';
            }
            else if (i >= mid && s[i] == 'R')
            {
                s[i] = 'L';
            }

            long long int sum = 0;
            for (long long int j = 0; j < n; j++)
            {
                if (s[j] == 'R')
                {
                    sum += n - (j + 1);
                }
                else
                    sum += j;
            }

            mx = max(mx, sum);
            cout << mx << " ";
        }

        cout << '\n';
    }

    return 0;
}