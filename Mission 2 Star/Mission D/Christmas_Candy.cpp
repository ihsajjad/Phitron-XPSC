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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (i == 0)
                arr[i] = val;
            else
            {
                if (arr[i - 1] > val)
                {
                    ans++;
                    arr[i] = arr[i - 1];
                }
                else
                    arr[i] = val;
            }
        }
        cout << ans << endl;
    }

    return 0;
}