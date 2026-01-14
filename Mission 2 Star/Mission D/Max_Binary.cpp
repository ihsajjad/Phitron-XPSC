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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (s[0] == '0')
        {
            s[0] = '1';
            k--;
        }

        for (int i = 0; i < k; i++)
            s.push_back('0');
        cout << s << endl;
    }

    return 0;
}