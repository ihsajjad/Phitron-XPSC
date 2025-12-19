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
        for (int i = 0, j = 1; j < n; i += 2, j += 2)
            swap(s[i], s[j]);

        for (int i = 0; i < n; i++)
        {
            int val = s[i];
            s[i] = char(97 + (122 - val));
        }

        cout << s << endl;
    }

    return 0;
}