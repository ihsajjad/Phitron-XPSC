#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        cout << a << '\n';
    else if (b <= c && b <= a)
        cout << b << '\n';
    else
        cout << c << '\n';

    return 0;
}