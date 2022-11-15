#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define ll long long int
#define vec vector
#define str string
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;
const int inf = 1e9;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p = 0, i;
    cin >> n;
    vec<int> a(n);

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 5)
            p++;
    }

    if (p == n)
        printf("-1");
    else if (p / 9 == 0 && p < n)
        printf("0");
    else if (p >= 9)
    {
        for (i = 0; i < 9 * (p / 9); i++)
            printf("5");
        for (i = 0; i < n - p; i++)
            printf("0");
    }
    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Saturday, August 20, 2022 | 12:13:46 PM (+06)
