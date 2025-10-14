#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<string, int, int> student = {"Sajjad", 40, 89};

    // cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << endl;

    auto [name, roll, marks] = student;

    cout << name << " " << roll << " " << marks << endl;
    return 0;
}