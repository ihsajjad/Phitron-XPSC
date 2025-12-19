#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;

    string short_form;
    for (char c : name)
        if (c >= 65 && c <= 90)
            short_form += c;

    cout << short_form << endl;
    return 0;
}