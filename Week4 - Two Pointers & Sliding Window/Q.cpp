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
        string s;
        cin >> n >> k >> s;

        int l = -1, r = 0, count = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                if (l == -1)
                {
                    count++;
                    l = r;
                }
                else
                {
                    int dist = r - l;
                    if (dist >= k)
                    {
                        count++;
                        l = r;
                    }
                }
            }
            r++;
        }

        cout << count << '\n';
    }

    return 0;
}