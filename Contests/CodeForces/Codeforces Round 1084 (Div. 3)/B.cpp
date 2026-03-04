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

        bool is_decreasing = false;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arr[i] = val;

            if (i > 0 && arr[i - 1] > arr[i])
            {
                is_decreasing = true;
            }
        }

        if (n == 1 || is_decreasing)
            cout << 1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}