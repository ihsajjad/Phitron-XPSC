#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, p1, b, p2;
    cin >> a >> p1 >> b >> p2;
    cout << ((b * p2) - (a * p1)) << endl;
    return 0;
}