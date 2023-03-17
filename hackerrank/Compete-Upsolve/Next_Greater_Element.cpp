#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        j = 0;
        for (j = i + 1; i < n; j++)
        {
            if (values[i] < values[j])
            {
                cout << values[i] << " " << values[j] << endn;
                break;
            }
        }
        if (j == n)
        {
            cout << values[i] << " " << -1 << endn;
        }
    }
    cout << values[i] << " " << -1 << endn;
}
// Solved By: shihab4t
// Monday, July 12, 2021 | 11:27:58 AM (+06)
