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
        int t1 = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val)
                t1++;
        }
        cout << (t1 % 2 ? "NO" : "YES") << endl;
    }

    return 0;
}