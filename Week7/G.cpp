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
        int J = 1;
        bool ok = true;
        while (J <= n)
        {
            string s;
            cin >> s;
            int val = 0;
            for (int i = 0, j = k - 1; i < k; i++, j--)
            {
                if (s[i] == '1')
                {
                    val += (1 << j);
                }
            }

            if (J == 1 && val == 0)
            {
                J = 0;
                n--;
            }

            if (J != val)
            {
                ok = false;
            }
            J++;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}