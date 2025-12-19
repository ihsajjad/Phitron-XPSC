#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    char c;
    while (cin >> c)
    {
        if (c == '<')
            s.pop_back();
        else
            s.push_back(c);
    }

    cout << s << '\n';

    return 0;
}