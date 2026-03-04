#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    cout
        << (n >= 200 ? n - 50 : n) << endl;
    return 0;
}