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
        vector<int> arr;
        for (int i = 1; i <= n; i++)
            arr.push_back(i);

        sort(arr.rbegin(), arr.rend());
        for (int i = 1; i <= n; i++)
        {
            if (arr[i - 1] % 2 == 0 && i % 2 == 1)
                swap(arr[i - 1], arr[i]);
            cout << arr[i - 1] << " ";
        }
    }

    return 0;
}