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
        int n, cnt = 1;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
                cnt++;
            else
            {
                if (cnt % 2)
                    cout << s[i];
                else
                    cout << string(2, s[i]);
                cnt = 1;
            }
        }

        cout << endl;
    }

    return 0;
}