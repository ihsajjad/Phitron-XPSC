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
        double a, b, n;
        cin >> a >> b >> n;
        double len = min(b, a / n);
        cout << len << endl;
    }

    return 0;
}