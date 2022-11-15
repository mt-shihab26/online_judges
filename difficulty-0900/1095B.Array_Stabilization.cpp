#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
#define endn "\n"
#define umap unordered_map
#define uset unordered_set

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0, mn = 1e5 + 10;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int len = a.size();
    int ans = min(a[len - 2] - a[0], a[len - 1] - a[1]);
    cout << ans << endn;
}
// Solved By: shh26b
// Thursday, July 22, 2021 | 07:33:59 PM (+06)
