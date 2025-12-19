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
        int om = 0, addy = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
                cnt++;
            else
                cnt = 0;
            om = max(om, cnt);
        }
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
                cnt++;
            else
                cnt = 0;
            addy = max(addy, cnt);
        }

        cout << (om > addy ? "Om" : addy > om ? "Addy"
                                              : "Draw")
             << endl;
    }

    return 0;
}