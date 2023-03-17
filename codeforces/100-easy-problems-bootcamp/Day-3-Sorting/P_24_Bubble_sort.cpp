#include <bits/stdc++.h>
using namespace std;

bool bubble_sort(int arr[], int n)
{
    int i, j, temp, cnt;

    for (i = 1; i < n; ++i)
    {
        cnt = 0;
        for (j = 1; j < n; j++)
        {
            cnt++;
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            cout << arr[j] << " ";
        }
        cout << arr[n - 1] << "\n";
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i;

    cin >> n;

    int arr[2001];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
}