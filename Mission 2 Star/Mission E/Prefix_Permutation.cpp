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
        long long sum = (n * (n + 1)) / 2;
        if (sum % n == 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 1; i <= n; i++)
            if (i % 2)
                arr[i] = i;

        for (int i = 2; i <= n; i++)
            if (i % 2 == 0)
                arr[i - 2] = i;

        for (int child : arr)
            cout << child << " ";
        cout << endl;
    }

    return 0;
}