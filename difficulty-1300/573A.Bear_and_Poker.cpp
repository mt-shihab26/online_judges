#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        while (true)
        {
            if (not(arr[i] % 2))
                arr[i] /= 2;
            else if (not(arr[i] % 3))
                arr[i] /= 3;
            else
                break;
        }
    }
    sort(arr, arr + n);

    if (arr[0] == arr[n - 1])
    {
        cout << "Yes" << endn;
    }
    else
    {
        cout << "No" << endn;
    }

    return 0;
}
// Solved By: shihab4t
// Tuesday, June 29, 2021 | 01:23:15 AM (+06)
