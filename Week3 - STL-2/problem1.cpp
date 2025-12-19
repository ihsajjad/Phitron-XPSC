#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int book, page;
    cin >> book >> page;

    int lines = book * page * 2 * 50;
    cout << lines << '\n';
    return 0;
}