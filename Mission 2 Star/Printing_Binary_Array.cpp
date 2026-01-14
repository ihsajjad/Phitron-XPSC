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
        vector<int> arr(n), c(n);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0 && arr[i - 1] == arr[i])
                c[i] = arr[i] == 0 ? 1 : 0;
            else
                c[i] = arr[i];
        }

        for (int child : c)
            cout << child << " ";
        cout << endl;
    }

    return 0;
}