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
        string a, b;
        cin >> a >> b;
        map<int, int> mp_a, mp_b;

        int a_even = 0, a_odd = 0, b_even = 0, b_odd = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                flag = false;

            if (i % 2)
            {
                if (a[i] == '1')
                    a_odd++;
                if (b[i] == '0')
                    b_odd++;
            }
            else
            {
                if (a[i] == '1')
                    a_even++;
                if (b[i] == '0')
                    b_even++;
            }
        }

        if (flag)
            cout << "YES" << '\n';
        else if ((a_even <= b_odd) && (a_odd <= b_even))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}