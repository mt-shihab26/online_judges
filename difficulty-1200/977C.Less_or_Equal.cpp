#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define endn "\n"

void test(void)
{
    int len, k;
    cin >> len >> k;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + len);

    if (k == 0 and arr[0] > 1)
        cout << arr[0] - 1;
    else if (arr[k - 1] == arr[k] || k == 0)
        cout << -1;
    else
        cout << arr[k - 1] << endn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    test();

    return 0;
}
// Solved By: shihab4t
// Thursday, June 24, 2021 | 02:54:18 AM (+06)
