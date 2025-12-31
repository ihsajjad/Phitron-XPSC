#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float a, b;
    cin >> a >> b;
    a++;
    cout << (ceil(((a * 4) + (b * 3)) / 8)) << endl;
    return 0;
}