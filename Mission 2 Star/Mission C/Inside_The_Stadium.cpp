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
        vector<float> arr(n);
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            float strike = (sum / float(i + 1)) * 100;
            if (strike == 100)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}