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
        int count = 0;
        for (int i = n - 1; i >= 0; i--)
            if (s[i] != s[n - 1])
                count++;

        cout << count << '\n';
    }

    return 0;
}