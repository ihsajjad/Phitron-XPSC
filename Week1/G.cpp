#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (char c : s)
        mp[c]++;

    string ans = "None";

    for (int i = 0; i < 26; i++)
        if (!mp[char(97 + i)])
        {
            ans = char(97 + i);
            break;
        }

    cout << ans << endl;

    return 0;
}