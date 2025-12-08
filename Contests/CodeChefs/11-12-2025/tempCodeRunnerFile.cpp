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
        string s;
        cin >> s;
        float c1 = 0, c0 = 0;

        for (int i = 1; i < n; i++)
        {
            if (s.substr(i - 1, 2) == "00")
                c0++;
            else if (s.substr(i - 1, 2) == "11")
                c1++;
        }

        if (c1 >= c0)
            cout << 0 << endl;
        else
        {
            if (c0 < 2)
                cout << 1 << endl;
            else
                cout << ceil(c0 / 2) << endl;
        }
    }

    return 0;
}