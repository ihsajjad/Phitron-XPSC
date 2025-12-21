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
        string s;
        cin >> s;
        int t0 = 0, t1 = 0;
        for (char c : s)
            if (c == '0')
                t0++;
            else
                t1++;

        if (s.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        if ((t0 > 1 && t1 > 1) || (t0 == 0 || t1 == 0))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}