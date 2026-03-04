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
        int n;
        cin >> n;
        n--;
        int a = 0, b = 0, c = 0;

        c = n / 8;
        n = n % 8;
        b = n / 2;
        n = n % 2;
        a = n > 0;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}