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
        vector<int> arr(n);
        long long sum = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                sum += (arr[i] - arr[i - 1]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (sum <= 0)
            {
                if (arr[i] == -1)
                {
                    arr[i] = 0;
                    sum = 0;
                }
            }
            else
            {
                if (arr[i] == -1)
                {
                    arr[i] += sum;
                    sum = 0;
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            sum2 += (arr[i] - arr[i - 1]);
            cout << arr[i] << " N " << arr[i - 1] << " => " << sum2 << endl;
        }

        // cout << sum2 << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        cout << endl;
    }

    return 0;
}