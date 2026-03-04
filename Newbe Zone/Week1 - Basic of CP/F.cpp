#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, res = 0;
    cin >> a >> b;

    if (a > b)
        res += a--;
    else
        res += b--;

    if (a > b)
        res += a--;
    else
        res += b--;

    cout << res << endl;
    return 0;
}