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
        bool is_silence = false;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                is_silence = true;

            if (is_silence && s[i] == '1')
                cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}