#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int arr[n];
    for (long long int i = 0; i < n; i++)
        cin >> arr[i];

    long long int move = 0;

    for (long long int i = 1; i < n; i++)
        if (arr[i] < arr[i - 1])
        {
            long long int diff = arr[i - 1] - arr[i];
            move += diff;
            arr[i] += diff;
        }

    cout << move << endl;

    return 0;
}