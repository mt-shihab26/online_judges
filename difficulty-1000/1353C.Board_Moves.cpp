#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef unsigned long long int ullint;
typedef short int sint;
typedef unsigned int uint;
#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    llint n, ans, x, i;
    while (t--)
    {
        cin >> n;
        llint midel = ceil(n / 2.0) - 1;
        ans = 0;
        for (i = n; i >= 1; i -= 2)
        {
            ans += (((i * 4) - 4) * (midel));
            midel--;
        }
        cout << ans << endn;
    }
}
// Solved By: shihab4t
// Monday, August 09, 2021 | 01:15:49 AM (+06)
// Accepted: 01:36:28 AM (+06)
