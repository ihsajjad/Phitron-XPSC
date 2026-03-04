#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        double sum = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        double avg = sum / n;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (((sum - arr[i]) / (n - 1)) == avg)
                ans = min(ans, i);
        }

        if (ans == INT_MAX)
            cout << "Impossible" << '\n';
        else
            cout << (ans + 1) << '\n';
    }

    return 0;
}