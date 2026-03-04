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
        int n, a, b, ans = 0;
        cin >> n >> a >> b;
        bool is_jaket = false;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val < a)
            {
                if (!is_jaket)
                    ans++;
                is_jaket = true;
            }
            else if (val > b)
                is_jaket = false;
            }
        cout << ans << endl;
    }

    return 0;
}