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
        vector<vector<int>> arr(2, vector<int>(n));

        for (int i = 0; i < n; i++)
            cin >> arr[0][i];
        for (int i = 0; i < n; i++)
            cin >> arr[1][i];

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int a = arr[0][i], b = arr[1][i], c = arr[0][i + 1], d = arr[1][i + 1];
            if (a > b && a > c)
            {
                if (b > c && b > d)
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << endl;
        for (int i = 0; i < n; i++)
            cout << arr[1][i] << " ";

        cout << endl;
    }

    return 0;
}