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

        sort(arr.begin(), arr.begin());
        int c = arr[1] - arr[0];
        for (int i = 1; i < n; i++)
            c = __gcd(c, arr[i] - arr[i - 1]);

        int total = (arr.back() - arr.front()) / c;
        cout << total - n + 1 << endl;
    }

    return 0;
}