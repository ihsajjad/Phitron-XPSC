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
        int n, minus1 = 0;
        cin >> n;
        vector<int> arr(n);
        long long sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
                minus1++;

            if (i > 0)
                sum += (arr[i] - arr[i - 1]);
        }

        cout << sum << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1)
            {
                int rem = abs(sum) - minus1 +1;
                cout << " Rem " << rem << endl;
                if (sum <= 0 && rem > 0)
                {
                    arr[i] = abs(sum) - minus1;
                    minus1 = 0;
                }
                else
                {
                    arr[i] += sum;
                }
                sum = 0;
            }
        }

        for (int i = 1; i < n; i++)
        {
            // sum2 += (arr[i] - arr[i - 1]);
            // cout << arr[i] << " - " << arr[i - 1] << " => " << (arr[i] - arr[i - 1]) << endl;
            // cout << sum2 << endl;
        }

        // cout << sum2 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}