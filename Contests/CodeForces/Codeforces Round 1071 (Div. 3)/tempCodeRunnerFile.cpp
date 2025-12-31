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

        int sum = 0;
        for (int i = 0, j = 1; j < n; i++, j++)
        {
            if (i == idx || j == idx)
                continue;

            sum += abs(arr[j] - arr[i]);
        }

        cout << sum << endl;
    }

    return 0;
}