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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int t_dis = 0, t_stat = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                t_dis++;
            else
                t_stat++;
        }
        cout << ((t_dis * a) + (t_stat * b)) << endl;
    }

    return 0;
}