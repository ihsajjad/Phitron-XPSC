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
        int n, sum = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            char val = s[i];
            if (val == '0')
                sum++;
            else if (val == '1')
                break;
        }

        cout << sum << '\n';
    }

    return 0;
}