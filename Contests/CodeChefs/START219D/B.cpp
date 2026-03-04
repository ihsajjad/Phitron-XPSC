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
        float a, b;
        cin >> a >> b;
        float avg1 = a / 100, avg2 = b / 225;

        cout << (avg1 > avg2 ? "Large" : avg1 < avg2 ? "Small"
                                                     : "Equal")
             << endl;
    }

    return 0;
}