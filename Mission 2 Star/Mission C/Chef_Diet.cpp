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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int rem = 0;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            int val = arr[i];

            if ((rem + val) < k)
            {
                idx = i + 1;
                break;
            }
            else
            {
                if (val > k)
                    rem += val - k;
                else
                    rem -= k - val;
            }
        }

        if (idx == -1)
            cout << "YES" << endl;
        else
            cout << "NO " << idx << endl;
    }

    return 0;
}