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

        long long ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            int x = arr[i];
            ml.insert(x);
            int y = *ml.begin();
            if (y < x)
            {
                ml.erase(y);
                ml.insert(x);
            }
        }
        for (int x : ml)
            ans += x;

        cout << ans << endl;
    }

    return 0;
}