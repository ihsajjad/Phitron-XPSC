#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n <= 50)
        cout << 100 << endl;
    else if (n <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
    return 0;
}