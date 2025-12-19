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
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
        }

        if (sum < 0)
        {
            int x = ceil(abs(sum) / n);
            cout << x << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}