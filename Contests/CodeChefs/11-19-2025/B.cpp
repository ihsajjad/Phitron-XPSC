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
        float speed = INT_MIN;
        int lebel;

        for (int i = 1; i <= n; i++)
        {
            float dst, tim;
            cin >> dst >> tim;
            float tmp = dst / tim;
            if (tmp > speed)
            {
                speed = tmp;
                lebel = i;
            }
        }

        cout << lebel << endl;
    }

    return 0;
}