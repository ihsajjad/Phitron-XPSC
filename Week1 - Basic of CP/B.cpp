#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, lim;
        cin >> n;
        int oneCount = 0, greaterThanOne = 0;
        vector<int> arr(n, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                oneCount++;
            if (arr[i] > 1)
                greaterThanOne++;
        }

        int spell = oneCount % 2 == 1 ? (oneCount / 2) + 1 : oneCount / 2;
        spell += greaterThanOne;
        cout << spell << endl;
    }

    return 0;
}