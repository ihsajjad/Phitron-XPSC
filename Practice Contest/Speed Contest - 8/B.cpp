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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;
        int pass_marks = arr[0] - 1;
        if (pass_marks < 0)
            ans = n;
        else
        {
            for (int val : arr)
                if (val > pass_marks)
                    ans++;
        }

        cout << ans << endl;
    }

    return 0;
}