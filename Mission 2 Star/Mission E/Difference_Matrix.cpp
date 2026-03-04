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

        vector<vector<int>> arr(n, vector<int>(n, 0));
        int val = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = val;
                val += 2;

                if (val > n * n)
                    val = 2;
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}