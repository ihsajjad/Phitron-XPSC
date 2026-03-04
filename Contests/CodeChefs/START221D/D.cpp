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
        int ans = 0;
        if (n % 2)
            ans = 0;
        else if (n < 10)
            ans = -1;
        else
        {
            int last_dig = -1, mx_dig = 0;
            bool flag = false;
            while (n)
            {
                int dig = n % 10;
                mx_dig = max(mx_dig, dig);
                n /= 10;
                if (last_dig == -1)
                    last_dig = dig;

                if (dig % 2)
                {
                    ans = 1;
                    flag = true;
                    break;
                }
            }

            if (!flag)
            {
                if (last_dig >= mx_dig)
                    ans = 3;
                else
                    ans = 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}