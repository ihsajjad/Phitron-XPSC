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
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        if (s[0] == '0')
        {
            cout << "NO" << endl;
            continue;
        }

        int rem = x;
        for (char c : s)
        {
            if (rem < 0)
                break;

            if (c == '0')
                rem--;
            else
                rem = x;
        }

        if (rem >= 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}