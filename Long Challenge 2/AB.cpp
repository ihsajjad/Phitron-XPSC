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
        int n, b;
        cin >> n >> b;
        long long sqr = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int w, h, p;
            cin >> w >> h >> p;
            if (p <= b)
                sqr = max(sqr, 1LL * w * h);
        }
        if (sqr == INT_MIN)
            cout << "no tablet" << endl;
        else
            cout << sqr << endl;
    }

    return 0;
}