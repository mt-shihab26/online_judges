#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define gp ' '
#define lli long long int
#define vec vector
#define str string

bool solve()
{
    int n, k;
    cin >> n >> k;

    cout << (k <= n * 3 ? n * 3 - k : 0) << ed;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// github.com/shh26b (Shihab Mahamud)
// Sunday, July 17, 2022 | 04:15:00 AM (+06)
