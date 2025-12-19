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
        float x, y, donate;
        cin >> x >> y >> donate;

        if (x * y <= donate)
            cout << 0 << endl;
        else
        {
            float divX = donate / x, divY = donate / y;
            cout << max((x - ceil(divY)) * y, (y - ceil(divX)) * x) << endl;
        }
    }

    return 0;
}