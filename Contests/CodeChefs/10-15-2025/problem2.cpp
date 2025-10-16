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

        int curr = n, jumps = n - 1;

        for (int i = jumps, j = 1; i >= 1; i--, j++)
        {
            if (j % 2 == 1)
                curr -= i;
            else
                curr += i;
        }
        cout << curr << '\n';
    }

    return 0;
}