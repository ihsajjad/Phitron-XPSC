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
        int x, y;
        cin >> x >> y;
        int i = 1;
        while (x > y)
        {
            y += i;
            if (x <= y)
                break;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}