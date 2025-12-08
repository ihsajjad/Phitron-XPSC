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
        vector<int> arr;
        for (int i = 1; i <= n; i++)
            arr.push_back(i);

        int g = n / k;
        for (int i = 0; i < n && k; i++)
            if (arr[i] % g == 0)
            {
                cout << arr[i] << " ";
                k--;
            }

        cout << endl;
    }

    return 0;
}