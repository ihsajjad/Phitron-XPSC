#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool flag = false;
    for (int i = 0, j = 1; j < n; i++, j++)
    {
        if (s[i] == 's' && s[i] == s[j])
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "hiss" << endl;
    else
        cout << "no hiss" << endl;

    return 0;
}