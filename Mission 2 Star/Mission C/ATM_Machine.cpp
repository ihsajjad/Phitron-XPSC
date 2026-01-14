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
        int n, budget;
        cin >> n >> budget;
        for (int i = 0; i < n; i++)
        {
            int amount;
            cin >> amount;
            if (budget >= amount)
            {
                budget -= amount;
                cout << 1;
            }
            else
                cout << 0;
        }

        cout << endl;
    }

    return 0;
}