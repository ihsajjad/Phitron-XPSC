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
        int idx = -1, mx = INT_MIN;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
            {
                mx = arr[i];
                idx = i;
            }
        }

        int i = 0, j = 1;
        int sum = 0;
        while (j < n)
        {
            if (i == idx || j == idx)
            {
                if (i == idx)
                    i++;
                else
                    j++;
                continue;
            }

            sum += abs(arr[j] - arr[i]);

            i++, j++;
        }

        cout << sum << endl;
    }

    return 0;
}