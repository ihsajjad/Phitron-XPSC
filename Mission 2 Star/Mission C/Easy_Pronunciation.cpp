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
        int cnt = 0;
        bool flag = true;
        for (char c : s)
        {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
                cnt++;
            else
                cnt = 0;
            if (cnt >= 4)
                flag = false;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}