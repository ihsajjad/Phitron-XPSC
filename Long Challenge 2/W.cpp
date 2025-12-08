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
        bool has_adj1 = false, has_1 = false;
        for (int i = 0; i < n; i++)
        {
            if (s.substr(i, 2) == "11")
                has_adj1 = true;
            else if (s[i] == '1')
                has_1 = true;
        }

        cout << (has_adj1 ? 2 : has_1 ? 1
                                      : 0)
             << '\n';
    }

    return 0;
}