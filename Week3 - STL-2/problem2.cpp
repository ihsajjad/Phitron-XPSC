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
        int customers, cost;
        cin >> customers >> cost;

        int served = 0, mx = 0;
        for (int i = customers; i >= cost; i--)
        {
            mx += i;
            served++;
        }

        cout << (mx - (served * cost)) << '\n';
    }

    return 0;
}