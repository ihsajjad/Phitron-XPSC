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
        int pos = 0;
        for (int i = 0; s[i] == '0'; i++)
            pos = i + 1;

        for (int i = n - 3; i >= pos; i--)
            s[i] = '1', s[i + 1] = '0', s[i + 2] = '0';

        cout << s << endl;
    }

    return 0;
}