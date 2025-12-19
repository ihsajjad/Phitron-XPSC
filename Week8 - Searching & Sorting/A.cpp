#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        bool is_Exist = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                is_Exist = true;
                break;
            }
            else if (arr[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }

        cout << (is_Exist ? "YES" : "NO") << endl;
    }

    return 0;
}