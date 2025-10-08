#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int mex = 0, operations = 0;
    for (int i = 0; i < n; i++)
    {
        if (mex == arr[i])
            mex++;

        if (x == arr[i])
            operations++;
    }

    if (mex == x)
        cout << operations << endl;
    else if (mex > x)
        cout << 1 << endl;
    else
    {
        operations += x - mex;
        cout
            << operations << endl;
    }

    return 0;
}