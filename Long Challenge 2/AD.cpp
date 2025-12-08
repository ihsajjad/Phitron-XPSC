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
        float n, k;
        cin >> n >> k;
        cout << ceil(n / k) << endl;
    }

    return 0;
}