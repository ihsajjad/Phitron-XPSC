#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, f;
    cin >> d >> f;
    int diff = d % 7;
    cout << (f - diff <= 0 ? f + diff + 1 : f - diff) << endl;
    return 0;
}