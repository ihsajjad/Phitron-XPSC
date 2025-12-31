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
        string s;
        cin >> n >> s;
        int pairs = 0;
        for (int i = 0, j = 1; j < n; i += 2, j += 2)
            if (s[i] != s[j])
                pairs++;

        cout << ((pairs % 2) ? "Zlatan\n" : "Ramos\n");
    }

    return 0;
}