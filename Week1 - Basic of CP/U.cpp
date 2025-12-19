#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val;
    while (cin >> val)
    {
        if(val==0) break;
        
        int ans = (val * (val + 1) * (2 * val + 1)) / 6;
        cout << ans << endl;
    }

    return 0;
}