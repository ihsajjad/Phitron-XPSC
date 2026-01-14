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
        int t0 = 0, t1 = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '0')
                t0++;
            else
                t1++;
        }

        string s;
        if (t0 > t1)
        {
            for (int i = 0; i < t0; i++)
                s.push_back('0');
        }
        else
        {
            for (int i = 0; i < t1; i++)
                s.push_back('1');
        }

        cout << s << endl;
    }
    return 0;
}