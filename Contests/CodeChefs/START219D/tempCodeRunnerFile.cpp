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
        int t_0 = 0, t_1 = 0, t_swap = 0;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                t_0++;
            else
                t_1++;

            if (t_0 >= t_1 && s[i] == '1')
                t_swap += t_0;
        }

        if (t_1 >= t_0)
            cout << n << " " << t_swap << endl;
        else
            cout << t_1 + 1 << " " << t_swap << endl;
    }

    return 0;
}